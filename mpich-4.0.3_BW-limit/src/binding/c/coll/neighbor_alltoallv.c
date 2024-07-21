/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Neighbor_alltoallv */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Neighbor_alltoallv = PMPI_Neighbor_alltoallv
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Neighbor_alltoallv  MPI_Neighbor_alltoallv
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Neighbor_alltoallv as PMPI_Neighbor_alltoallv
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Neighbor_alltoallv(const void *sendbuf, const int sendcounts[], const int sdispls[],
                           MPI_Datatype sendtype, void *recvbuf, const int recvcounts[],
                           const int rdispls[], MPI_Datatype recvtype, MPI_Comm comm)
                            __attribute__ ((weak, alias("PMPI_Neighbor_alltoallv")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Neighbor_alltoallv
#define MPI_Neighbor_alltoallv PMPI_Neighbor_alltoallv
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Neighbor_alltoallv(const void *sendbuf, const int sendcounts[],
                                       const int sdispls[], MPI_Datatype sendtype, void *recvbuf,
                                       const int recvcounts[], const int rdispls[],
                                       MPI_Datatype recvtype, MPI_Comm comm)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Comm *comm_ptr ATTRIBUTE((unused)) = NULL;

    MPIR_ERRTEST_INITIALIZED_ORDIE();

    MPID_THREAD_CS_ENTER(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    MPIR_FUNC_TERSE_ENTER;

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_ERRTEST_COMM(comm, mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    MPIR_Comm_get_ptr(comm, comm_ptr);

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_Comm_valid_ptr(comm_ptr, mpi_errno, FALSE);
            if (mpi_errno) {
                goto fn_fail;
            }
            int indegree, outdegree, weighted;
            mpi_errno = MPIR_Topo_canon_nhb_count(comm_ptr, &indegree, &outdegree, &weighted);
            MPIR_ERRTEST_DATATYPE(sendtype, "datatype", mpi_errno);
            if (!HANDLE_IS_BUILTIN(sendtype)) {
                MPIR_Datatype *datatype_ptr ATTRIBUTE((unused)) = NULL;
                MPIR_Datatype_get_ptr(sendtype, datatype_ptr);
                MPIR_Datatype_valid_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
                MPIR_Datatype_committed_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
            }
            for (int i = 0; i < outdegree; i++) {
                MPIR_ERRTEST_COUNT(sendcounts[i], mpi_errno);
                if (sdispls[i] == 0) {
                    MPIR_ERRTEST_USERBUFFER(sendbuf, sendcounts[i], sendtype, mpi_errno);
                }
            }
            MPIR_ERRTEST_DATATYPE(recvtype, "datatype", mpi_errno);
            if (!HANDLE_IS_BUILTIN(recvtype)) {
                MPIR_Datatype *datatype_ptr ATTRIBUTE((unused)) = NULL;
                MPIR_Datatype_get_ptr(recvtype, datatype_ptr);
                MPIR_Datatype_valid_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
                MPIR_Datatype_committed_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
            }
            for (int i = 0; i < indegree; i++) {
                MPIR_ERRTEST_COUNT(recvcounts[i], mpi_errno);
                if (rdispls[i] == 0) {
                    MPIR_ERRTEST_USERBUFFER(recvbuf, recvcounts[i], recvtype, mpi_errno);
                }
            }
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    int indegree, outdegree, weighted;
    mpi_errno = MPIR_Topo_canon_nhb_count(comm_ptr, &indegree, &outdegree, &weighted);
    MPI_Aint *tmp_array = MPL_malloc((outdegree + indegree) * 2 * sizeof(MPI_Aint), MPL_MEM_OTHER);
    for (int i = 0; i < outdegree; i++) {
        tmp_array[i] = sendcounts[i];
    }
    for (int i = 0; i < outdegree; i++) {
        tmp_array[outdegree + i] = sdispls[i];
    }
    for (int i = 0; i < indegree; i++) {
        tmp_array[outdegree * 2 + i] = recvcounts[i];
    }
    for (int i = 0; i < indegree; i++) {
        tmp_array[outdegree * 2 + indegree + i] = rdispls[i];
    }
    mpi_errno = MPIR_Neighbor_alltoallv(sendbuf, tmp_array, tmp_array + outdegree, sendtype, recvbuf,
                                        tmp_array + outdegree * 2, tmp_array + outdegree * 2 + indegree,
                                        recvtype, comm_ptr);
    if (mpi_errno) {
        goto fn_fail;
    }
    MPL_free(tmp_array);
    /* ... end of body of routine ... */

  fn_exit:
    MPIR_FUNC_TERSE_EXIT;
    MPID_THREAD_CS_EXIT(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    return mpi_errno;

  fn_fail:
    /* --BEGIN ERROR HANDLINE-- */
#ifdef HAVE_ERROR_CHECKING
    mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE, __func__, __LINE__, MPI_ERR_OTHER,
                                     "**mpi_neighbor_alltoallv",
                                     "**mpi_neighbor_alltoallv %p %p %p %D %p %p %p %D %C", sendbuf,
                                     sendcounts, sdispls, sendtype, recvbuf, recvcounts, rdispls,
                                     recvtype, comm);
#endif
    mpi_errno = MPIR_Err_return_comm(comm_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Neighbor_alltoallv(QMPI_Context context, int tool_id, const void *sendbuf,
                            const int sendcounts[], const int sdispls[], MPI_Datatype sendtype,
                            void *recvbuf, const int recvcounts[], const int rdispls[],
                            MPI_Datatype recvtype, MPI_Comm comm)
{
    return internal_Neighbor_alltoallv(sendbuf, sendcounts, sdispls, sendtype, recvbuf, recvcounts, rdispls, recvtype, comm);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Neighbor_alltoallv(const void *sendbuf, const int sendcounts[], const int sdispls[],
                           MPI_Datatype sendtype, void *recvbuf, const int recvcounts[],
                           const int rdispls[], MPI_Datatype recvtype, MPI_Comm comm)
{
    QMPI_Context context;
    QMPI_Neighbor_alltoallv_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Neighbor_alltoallv(context, 0, sendbuf, sendcounts, sdispls, sendtype, recvbuf,
                                       recvcounts, rdispls, recvtype, comm);

    fn_ptr = (QMPI_Neighbor_alltoallv_t *) MPIR_QMPI_first_fn_ptrs[MPI_NEIGHBOR_ALLTOALLV_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_NEIGHBOR_ALLTOALLV_T], sendbuf,
            sendcounts, sdispls, sendtype, recvbuf, recvcounts, rdispls, recvtype, comm);
}
#else /* ENABLE_QMPI */
/*@
   MPI_Neighbor_alltoallv - The vector variant of MPI_Neighbor_alltoall allows sending/receiving different numbers of elements to and from each neighbor.

Input Parameters:
+ sendbuf - starting address of send buffer (choice)
. sendcounts - non-negative integer array (of length outdegree) specifying the number of elements to send to each neighbor (non-negative integer)
. sdispls - integer array (of length outdegree). Entry j specifies the displacement (relative to sendbuf) from which to send the outgoing data to neighbor j (integer)
. sendtype - data type of send buffer elements (handle)
. recvcounts - non-negative integer array (of length indegree) specifying the number of elements that are received from each neighbor (non-negative integer)
. rdispls - integer array (of length indegree). Entry i specifies the displacement (relative to recvbuf) at which to place the incoming data from neighbor i (integer)
. recvtype - data type of receive buffer elements (handle)
- comm - communicator with topology structure (handle)

Output Parameters:
. recvbuf - starting address of receive buffer (choice)

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_BUFFER
.N MPI_ERR_COMM
.N MPI_ERR_COUNT
.N MPI_ERR_TYPE
.N MPI_ERR_OTHER

@*/

int MPI_Neighbor_alltoallv(const void *sendbuf, const int sendcounts[], const int sdispls[],
                           MPI_Datatype sendtype, void *recvbuf, const int recvcounts[],
                           const int rdispls[], MPI_Datatype recvtype, MPI_Comm comm)
{
    return internal_Neighbor_alltoallv(sendbuf, sendcounts, sdispls, sendtype, recvbuf, recvcounts, rdispls, recvtype, comm);
}
#endif /* ENABLE_QMPI */

/* -- Begin Profiling Symbol Block for routine MPI_Neighbor_alltoallv_c */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Neighbor_alltoallv_c = PMPI_Neighbor_alltoallv_c
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Neighbor_alltoallv_c  MPI_Neighbor_alltoallv_c
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Neighbor_alltoallv_c as PMPI_Neighbor_alltoallv_c
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Neighbor_alltoallv_c(const void *sendbuf, const MPI_Count sendcounts[],
                             const MPI_Aint sdispls[], MPI_Datatype sendtype, void *recvbuf,
                             const MPI_Count recvcounts[], const MPI_Aint rdispls[],
                             MPI_Datatype recvtype, MPI_Comm comm)
                              __attribute__ ((weak, alias("PMPI_Neighbor_alltoallv_c")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Neighbor_alltoallv_c
#define MPI_Neighbor_alltoallv_c PMPI_Neighbor_alltoallv_c
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Neighbor_alltoallv_c(const void *sendbuf, const MPI_Count sendcounts[],
                                         const MPI_Aint sdispls[], MPI_Datatype sendtype,
                                         void *recvbuf, const MPI_Count recvcounts[],
                                         const MPI_Aint rdispls[], MPI_Datatype recvtype,
                                         MPI_Comm comm)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Comm *comm_ptr ATTRIBUTE((unused)) = NULL;

    MPIR_ERRTEST_INITIALIZED_ORDIE();

    MPID_THREAD_CS_ENTER(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    MPIR_FUNC_TERSE_ENTER;

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_ERRTEST_COMM(comm, mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    MPIR_Comm_get_ptr(comm, comm_ptr);

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_Comm_valid_ptr(comm_ptr, mpi_errno, FALSE);
            if (mpi_errno) {
                goto fn_fail;
            }
            int indegree, outdegree, weighted;
            mpi_errno = MPIR_Topo_canon_nhb_count(comm_ptr, &indegree, &outdegree, &weighted);
            MPIR_ERRTEST_DATATYPE(sendtype, "datatype", mpi_errno);
            if (!HANDLE_IS_BUILTIN(sendtype)) {
                MPIR_Datatype *datatype_ptr ATTRIBUTE((unused)) = NULL;
                MPIR_Datatype_get_ptr(sendtype, datatype_ptr);
                MPIR_Datatype_valid_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
                MPIR_Datatype_committed_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
            }
            for (int i = 0; i < outdegree; i++) {
                MPIR_ERRTEST_COUNT(sendcounts[i], mpi_errno);
                if (sdispls[i] == 0) {
                    MPIR_ERRTEST_USERBUFFER(sendbuf, sendcounts[i], sendtype, mpi_errno);
                }
            }
            MPIR_ERRTEST_DATATYPE(recvtype, "datatype", mpi_errno);
            if (!HANDLE_IS_BUILTIN(recvtype)) {
                MPIR_Datatype *datatype_ptr ATTRIBUTE((unused)) = NULL;
                MPIR_Datatype_get_ptr(recvtype, datatype_ptr);
                MPIR_Datatype_valid_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
                MPIR_Datatype_committed_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
            }
            for (int i = 0; i < indegree; i++) {
                MPIR_ERRTEST_COUNT(recvcounts[i], mpi_errno);
                if (rdispls[i] == 0) {
                    MPIR_ERRTEST_USERBUFFER(recvbuf, recvcounts[i], recvtype, mpi_errno);
                }
            }
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    if (sizeof(MPI_Count) == sizeof(MPI_Aint)) {
        mpi_errno = MPIR_Neighbor_alltoallv(sendbuf, (MPI_Aint *) sendcounts, (MPI_Aint *) sdispls,
                                            sendtype, recvbuf, (MPI_Aint *) recvcounts,
                                            (MPI_Aint *) rdispls, recvtype, comm_ptr);
        if (mpi_errno) {
            goto fn_fail;
        }
    } else {
        /* MPI_Count is bigger than MPI_Aint */
        int indegree, outdegree, weighted;
        mpi_errno = MPIR_Topo_canon_nhb_count(comm_ptr, &indegree, &outdegree, &weighted);
        MPI_Aint *tmp_array = MPL_malloc((outdegree + indegree) * 2 * sizeof(MPI_Aint), MPL_MEM_OTHER);
        for (int i = 0; i < outdegree; i++) {
            if (sendcounts[i] > MPIR_AINT_MAX) {
                mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE,
                                                 __func__, __LINE__, MPI_ERR_OTHER,
                                                 "**too_big_for_input",
                                                 "**too_big_for_input %s", "sendcounts[i]");
                goto fn_fail;
            }
            tmp_array[i] = sendcounts[i];
        }
        for (int i = 0; i < outdegree; i++) {
            if (sdispls[i] > MPIR_AINT_MAX) {
                mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE,
                                                 __func__, __LINE__, MPI_ERR_OTHER,
                                                 "**too_big_for_input",
                                                 "**too_big_for_input %s", "sdispls[i]");
                goto fn_fail;
            }
            tmp_array[outdegree + i] = sdispls[i];
        }
        for (int i = 0; i < indegree; i++) {
            if (recvcounts[i] > MPIR_AINT_MAX) {
                mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE,
                                                 __func__, __LINE__, MPI_ERR_OTHER,
                                                 "**too_big_for_input",
                                                 "**too_big_for_input %s", "recvcounts[i]");
                goto fn_fail;
            }
            tmp_array[outdegree * 2 + i] = recvcounts[i];
        }
        for (int i = 0; i < indegree; i++) {
            if (rdispls[i] > MPIR_AINT_MAX) {
                mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE,
                                                 __func__, __LINE__, MPI_ERR_OTHER,
                                                 "**too_big_for_input",
                                                 "**too_big_for_input %s", "rdispls[i]");
                goto fn_fail;
            }
            tmp_array[outdegree * 2 + indegree + i] = rdispls[i];
        }
        mpi_errno = MPIR_Neighbor_alltoallv(sendbuf, tmp_array, tmp_array + outdegree, sendtype, recvbuf,
                                            tmp_array + outdegree * 2, tmp_array + outdegree * 2 + indegree,
                                            recvtype, comm_ptr);
        if (mpi_errno) {
            goto fn_fail;
        }
        MPL_free(tmp_array);
    }
    /* ... end of body of routine ... */

  fn_exit:
    MPIR_FUNC_TERSE_EXIT;
    MPID_THREAD_CS_EXIT(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    return mpi_errno;

  fn_fail:
    /* --BEGIN ERROR HANDLINE-- */
#ifdef HAVE_ERROR_CHECKING
    mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE, __func__, __LINE__, MPI_ERR_OTHER,
                                     "**mpi_neighbor_alltoallv_c",
                                     "**mpi_neighbor_alltoallv_c %p %p %p %D %p %p %p %D %C", sendbuf,
                                     sendcounts, sdispls, sendtype, recvbuf, recvcounts, rdispls,
                                     recvtype, comm);
#endif
    mpi_errno = MPIR_Err_return_comm(comm_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Neighbor_alltoallv_c(QMPI_Context context, int tool_id, const void *sendbuf,
                              const MPI_Count sendcounts[], const MPI_Aint sdispls[],
                              MPI_Datatype sendtype, void *recvbuf, const MPI_Count recvcounts[],
                              const MPI_Aint rdispls[], MPI_Datatype recvtype, MPI_Comm comm)
{
    return internal_Neighbor_alltoallv_c(sendbuf, sendcounts, sdispls, sendtype, recvbuf, recvcounts, rdispls, recvtype, comm);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Neighbor_alltoallv_c(const void *sendbuf, const MPI_Count sendcounts[],
                             const MPI_Aint sdispls[], MPI_Datatype sendtype, void *recvbuf,
                             const MPI_Count recvcounts[], const MPI_Aint rdispls[],
                             MPI_Datatype recvtype, MPI_Comm comm)
{
    QMPI_Context context;
    QMPI_Neighbor_alltoallv_c_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Neighbor_alltoallv_c(context, 0, sendbuf, sendcounts, sdispls, sendtype,
                                         recvbuf, recvcounts, rdispls, recvtype, comm);

    fn_ptr = (QMPI_Neighbor_alltoallv_c_t *) MPIR_QMPI_first_fn_ptrs[MPI_NEIGHBOR_ALLTOALLV_C_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_NEIGHBOR_ALLTOALLV_C_T], sendbuf,
            sendcounts, sdispls, sendtype, recvbuf, recvcounts, rdispls, recvtype, comm);
}
#else /* ENABLE_QMPI */
/*@
   MPI_Neighbor_alltoallv_c - The vector variant of MPI_Neighbor_alltoall allows sending/receiving different numbers of elements to and from each neighbor.

Input Parameters:
+ sendbuf - starting address of send buffer (choice) (choice)
. sendcounts - non-negative integer array (of length outdegree) specifying the number of elements to send to each neighbor (non-negative integer) (non-negative integer)
. sdispls - integer array (of length outdegree). Entry j specifies the displacement (relative to sendbuf) from which to send the outgoing data to neighbor j (integer) (integer)
. sendtype - data type of send buffer elements (handle) (handle)
. recvcounts - non-negative integer array (of length indegree) specifying the number of elements that are received from each neighbor (non-negative integer) (non-negative integer)
. rdispls - integer array (of length indegree). Entry i specifies the displacement (relative to recvbuf) at which to place the incoming data from neighbor i (integer) (integer)
. recvtype - data type of receive buffer elements (handle) (handle)
- comm - communicator with topology structure (handle) (handle)

Output Parameters:
. recvbuf - starting address of receive buffer (choice) (choice)

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_BUFFER
.N MPI_ERR_COMM
.N MPI_ERR_COUNT
.N MPI_ERR_TYPE
.N MPI_ERR_OTHER

@*/

int MPI_Neighbor_alltoallv_c(const void *sendbuf, const MPI_Count sendcounts[],
                             const MPI_Aint sdispls[], MPI_Datatype sendtype, void *recvbuf,
                             const MPI_Count recvcounts[], const MPI_Aint rdispls[],
                             MPI_Datatype recvtype, MPI_Comm comm)
{
    return internal_Neighbor_alltoallv_c(sendbuf, sendcounts, sdispls, sendtype, recvbuf, recvcounts, rdispls, recvtype, comm);
}
#endif /* ENABLE_QMPI */
