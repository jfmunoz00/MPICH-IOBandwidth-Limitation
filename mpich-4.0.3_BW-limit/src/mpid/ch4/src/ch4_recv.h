/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

#ifndef CH4_RECV_H_INCLUDED
#define CH4_RECV_H_INCLUDED

#include "ch4_impl.h"

#ifndef MPIDI_CH4_DIRECT_NETMOD
MPL_STATIC_INLINE_PREFIX int anysource_irecv(void *buf, MPI_Aint count, MPI_Datatype datatype,
                                             int rank, int tag, MPIR_Comm * comm,
                                             int context_offset, MPIDI_av_entry_t * av,
                                             MPIR_Request ** request)
{
    int mpi_errno = MPI_SUCCESS;
    int need_unlock = 0;

    mpi_errno = MPIDI_SHM_mpi_irecv(buf, count, datatype, rank, tag, comm, context_offset, request);
    MPIR_ERR_CHECK(mpi_errno);

    MPIR_Assert(*request);
    /* 1. hold shm vci lock to prevent shm progress while we establish netmod request.
     * 2. MPIDI_NM_mpi_irecv need use recursive locking in case it share the shm vci lock
     */
#if MPICH_THREAD_GRANULARITY == MPICH_THREAD_GRANULARITY__VCI
    int shm_vci = MPIDI_Request_get_vci(*request);
#endif
    MPID_THREAD_CS_ENTER(VCI, MPIDI_VCI(shm_vci).lock);
    need_unlock = 1;
    if (!MPIR_Request_is_complete(*request) && !MPIDIG_REQUEST_IN_PROGRESS(*request)) {
        MPIR_Request *nm_rreq = NULL;
        mpi_errno = MPIDI_NM_mpi_irecv(buf, count, datatype, rank, tag, comm, context_offset,
                                       av, &nm_rreq, *request);
        MPIR_ERR_CHECK(mpi_errno);
        MPIDI_REQUEST_ANYSOURCE_PARTNER(*request) = nm_rreq;

        /* cancel the shm request if netmod/am handles the request from unexpected queue. */
        if (MPIR_Request_is_complete(nm_rreq)) {
            mpi_errno = MPIDI_SHM_mpi_cancel_recv(*request);
            if (MPIR_STATUS_GET_CANCEL_BIT((*request)->status)) {
                (*request)->status = nm_rreq->status;
            }
            /* nm_rreq will be freed here. User-layer will have a completed (cancelled)
             * request with correct status. */
            MPIDI_CH4_REQUEST_FREE(nm_rreq);
            goto fn_exit;
        }
    }
  fn_exit:
    if (need_unlock) {
        MPID_THREAD_CS_EXIT(VCI, MPIDI_VCI(shm_vci).lock);
    }
    return mpi_errno;
  fn_fail:
    goto fn_exit;
}
#endif

MPL_STATIC_INLINE_PREFIX int MPIDI_cancel_recv_unsafe(MPIR_Request * rreq)
{
    int mpi_errno;
    MPIR_FUNC_ENTER;

#ifdef MPIDI_CH4_DIRECT_NETMOD
    mpi_errno = MPIDI_NM_mpi_cancel_recv(rreq, false);
#else
    if (MPIDI_REQUEST(rreq, is_local)) {
        MPIR_Request *partner_rreq = MPIDI_REQUEST_ANYSOURCE_PARTNER(rreq);
        if (unlikely(partner_rreq)) {
            /* Canceling MPI_ANY_SOURCE receive -- first cancel NM recv, then SHM */
            mpi_errno = MPIDI_NM_mpi_cancel_recv(partner_rreq, false);
            MPIR_ERR_CHECK(mpi_errno);
            MPIDI_CH4_REQUEST_FREE(partner_rreq);
        }
        mpi_errno = MPIDI_SHM_mpi_cancel_recv(rreq);
    } else {
        mpi_errno = MPIDI_NM_mpi_cancel_recv(rreq, false);
    }
#endif
    MPIR_ERR_CHECK(mpi_errno);

  fn_exit:
    MPIR_FUNC_EXIT;
    return mpi_errno;
  fn_fail:
    goto fn_exit;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_irecv(void *buf,
                                         MPI_Aint count,
                                         MPI_Datatype datatype,
                                         int rank,
                                         int tag,
                                         MPIR_Comm * comm,
                                         int context_offset, MPIDI_av_entry_t * av,
                                         MPIR_Request ** req)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_FUNC_ENTER;

#ifdef MPIDI_CH4_USE_WORK_QUEUES
    MPID_THREAD_CS_ENTER(VCI, MPIDI_VCI(0).lock);
    *(req) = MPIR_Request_create_from_pool(MPIR_REQUEST_KIND__RECV, 0, 1);
    MPID_THREAD_CS_EXIT(VCI, MPIDI_VCI(0).lock);
    MPIR_ERR_CHKANDSTMT((*req) == NULL, mpi_errno, MPIX_ERR_NOREQ, goto fn_fail, "**nomemreq");
    MPIR_Datatype_add_ref_if_not_builtin(datatype);
    MPIDI_workq_pt2pt_enqueue(IRECV, NULL /*send_buf */ , buf, count, datatype,
                              rank, tag, comm, context_offset, av,
                              NULL /*status */ , *req, NULL /*flag */ , NULL /*message */ ,
                              NULL /*processed */);
#else
    *(req) = NULL;
#ifdef MPIDI_CH4_DIRECT_NETMOD
    mpi_errno = MPIDI_NM_mpi_irecv(buf, count, datatype, rank, tag, comm, context_offset, av,
                                   req, NULL);
#else
    if (unlikely(rank == MPI_ANY_SOURCE)) {
        mpi_errno = anysource_irecv(buf, count, datatype, rank, tag, comm, context_offset, av, req);

    } else {
        if (MPIDI_av_is_local(av))
            mpi_errno =
                MPIDI_SHM_mpi_irecv(buf, count, datatype, rank, tag, comm, context_offset, req);
        else
            mpi_errno =
                MPIDI_NM_mpi_irecv(buf, count, datatype, rank, tag, comm, context_offset, av,
                                   req, NULL);
    }
#endif
    MPIR_ERR_CHECK(mpi_errno);
#endif

  fn_exit:
    MPIR_FUNC_EXIT;
    return mpi_errno;

  fn_fail:
    goto fn_exit;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_imrecv(void *buf,
                                          MPI_Aint count, MPI_Datatype datatype,
                                          MPIR_Request * message)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_FUNC_ENTER;

#ifdef MPIDI_CH4_USE_WORK_QUEUES
    MPID_THREAD_CS_ENTER(VCI, MPIDI_VCI(0).lock);
    MPIR_Request *request = MPIR_Request_create_from_pool(MPIR_REQUEST_KIND__RECV, 0, 1);
    MPID_THREAD_CS_EXIT(VCI, MPIDI_VCI(0).lock);
    MPIR_ERR_CHKANDSTMT(request == NULL, mpi_errno, MPIX_ERR_NOREQ, goto fn_fail, "**nomemreq");
    MPIR_Datatype_add_ref_if_not_builtin(datatype);
    MPIDI_workq_pt2pt_enqueue(IMRECV, NULL /*send_buf */ , buf, count, datatype,
                              0 /*rank */ , 0 /*tag */ , NULL /*comm */ ,
                              0 /*context_offset */ , NULL /*av */ ,
                              NULL /*status */ , request, NULL /*flag */ ,
                              &message, NULL /*processed */);
#else
#ifdef MPIDI_CH4_DIRECT_NETMOD
    mpi_errno = MPIDI_NM_mpi_imrecv(buf, count, datatype, message);
#else
    if (MPIDI_REQUEST(message, is_local))
        mpi_errno = MPIDI_SHM_mpi_imrecv(buf, count, datatype, message);
    else
        mpi_errno = MPIDI_NM_mpi_imrecv(buf, count, datatype, message);
#endif
    MPIR_ERR_CHECK(mpi_errno);
#endif

  fn_exit:
    MPIR_FUNC_EXIT;
    return mpi_errno;

  fn_fail:
    goto fn_exit;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_cancel_recv_safe(MPIR_Request * rreq)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_FUNC_ENTER;

#if MPICH_THREAD_GRANULARITY == MPICH_THREAD_GRANULARITY__VCI
    int vci = MPIDI_Request_get_vci(rreq);
#endif
    /* MPIDI_NM_mpi_cancel_recv is used both externally and internally. For internal
     * usage it's often used inside a critical section (e.g. progress and anysource
     * receive). Therefore, we allow recursive lock usage here.
     */
    MPID_THREAD_CS_ENTER_REC_VCI(MPIDI_VCI(vci).lock);
    mpi_errno = MPIDI_cancel_recv_unsafe(rreq);
    MPID_THREAD_CS_EXIT(VCI, MPIDI_VCI(vci).lock);
    MPIR_ERR_CHECK(mpi_errno);

  fn_exit:
    MPIR_FUNC_EXIT;
    return mpi_errno;

  fn_fail:
    goto fn_exit;
}


MPL_STATIC_INLINE_PREFIX int MPID_Recv(void *buf,
                                       MPI_Aint count,
                                       MPI_Datatype datatype,
                                       int rank,
                                       int tag,
                                       MPIR_Comm * comm,
                                       int context_offset, MPI_Status * status,
                                       MPIR_Request ** request)
{
    return MPID_Irecv(buf, count, datatype, rank, tag, comm, context_offset, request);
}

MPL_STATIC_INLINE_PREFIX int MPID_Recv_init(void *buf,
                                            MPI_Aint count,
                                            MPI_Datatype datatype,
                                            int rank,
                                            int tag,
                                            MPIR_Comm * comm, int context_offset,
                                            MPIR_Request ** request)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Request *rreq;
    MPIR_FUNC_ENTER;

    MPID_THREAD_CS_ENTER(VCI, MPIDI_VCI(0).lock);
    MPIDI_CH4_REQUEST_CREATE(rreq, MPIR_REQUEST_KIND__PREQUEST_RECV, 0, 1);
    MPID_THREAD_CS_EXIT(VCI, MPIDI_VCI(0).lock);
    MPIR_ERR_CHKANDSTMT(rreq == NULL, mpi_errno, MPIX_ERR_NOREQ, goto fn_fail, "**nomemreq");

    *request = rreq;
    rreq->comm = comm;
    MPIR_Comm_add_ref(comm);

    MPIDI_PREQUEST(rreq, buffer) = (void *) buf;
    MPIDI_PREQUEST(rreq, count) = count;
    MPIDI_PREQUEST(rreq, datatype) = datatype;
    MPIDI_PREQUEST(rreq, rank) = rank;
    MPIDI_PREQUEST(rreq, tag) = tag;
    MPIDI_PREQUEST(rreq, context_id) = comm->context_id + context_offset;
    rreq->u.persist.real_request = NULL;
    MPIR_cc_set(rreq->cc_ptr, 0);

    MPIDI_PREQUEST(rreq, p_type) = MPIDI_PTYPE_RECV;
    MPIR_Datatype_add_ref_if_not_builtin(datatype);

  fn_exit:
    MPIR_FUNC_EXIT;
    return mpi_errno;

  fn_fail:
    goto fn_exit;
}


MPL_STATIC_INLINE_PREFIX int MPID_Mrecv(void *buf,
                                        MPI_Aint count,
                                        MPI_Datatype datatype, MPIR_Request * message,
                                        MPI_Status * status, MPIR_Request ** rreq)
{
    return MPID_Imrecv(buf, count, datatype, message, rreq);
}

MPL_STATIC_INLINE_PREFIX int MPID_Imrecv(void *buf, MPI_Aint count, MPI_Datatype datatype,
                                         MPIR_Request * message, MPIR_Request ** rreqp)
{
    int mpi_errno = MPI_SUCCESS;

    MPIR_FUNC_ENTER;

    MPIR_Assert(message->kind == MPIR_REQUEST_KIND__MPROBE);
    message->kind = MPIR_REQUEST_KIND__RECV;

    if (message->comm && MPIDI_is_self_comm(message->comm)) {
        mpi_errno = MPIDI_Self_imrecv(buf, count, datatype, message, rreqp);
    } else {
        *rreqp = message;
        mpi_errno = MPIDI_imrecv(buf, count, datatype, message);
    }
    MPIR_ERR_CHECK(mpi_errno);

    MPII_RECVQ_REMEMBER(message, message->status.MPI_SOURCE, message->status.MPI_TAG,
                        message->comm->recvcontext_id, buf, count);

  fn_exit:
    MPIR_FUNC_EXIT;
    return mpi_errno;
  fn_fail:
    goto fn_exit;
}

MPL_STATIC_INLINE_PREFIX int MPID_Irecv(void *buf,
                                        MPI_Aint count,
                                        MPI_Datatype datatype,
                                        int rank,
                                        int tag,
                                        MPIR_Comm * comm, int context_offset,
                                        MPIR_Request ** request)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_FUNC_ENTER;

    if (MPIDI_is_self_comm(comm)) {
        mpi_errno =
            MPIDI_Self_irecv(buf, count, datatype, rank, tag, comm, context_offset, request);
    } else {
        MPIDI_av_entry_t *av = (rank == MPI_ANY_SOURCE ? NULL : MPIDIU_comm_rank_to_av(comm, rank));
        mpi_errno = MPIDI_irecv(buf, count, datatype, rank, tag, comm, context_offset, av, request);
    }

    MPIR_ERR_CHECK(mpi_errno);

    MPII_RECVQ_REMEMBER(*request, rank, tag, comm->recvcontext_id, buf, count);
  fn_exit:
    MPIR_FUNC_EXIT;
    return mpi_errno;
  fn_fail:
    goto fn_exit;
}

MPL_STATIC_INLINE_PREFIX int MPID_Cancel_recv(MPIR_Request * rreq)
{
    int mpi_errno;
    MPIR_FUNC_ENTER;

    if (rreq->comm && MPIDI_is_self_comm(rreq->comm)) {
        mpi_errno = MPIDI_Self_cancel(rreq);
    } else {
        mpi_errno = MPIDI_cancel_recv_safe(rreq);
    }

    MPIR_ERR_CHECK(mpi_errno);
  fn_exit:
    MPIR_FUNC_EXIT;
    return mpi_errno;
  fn_fail:
    goto fn_exit;
}

#endif /* CH4_RECV_H_INCLUDED */
