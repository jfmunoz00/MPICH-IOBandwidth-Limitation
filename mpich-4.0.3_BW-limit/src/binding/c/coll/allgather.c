/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Allgather */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Allgather = PMPI_Allgather
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Allgather  MPI_Allgather
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Allgather as PMPI_Allgather
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Allgather(const void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf,
                  int recvcount, MPI_Datatype recvtype, MPI_Comm comm)
                   __attribute__ ((weak, alias("PMPI_Allgather")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Allgather
#define MPI_Allgather PMPI_Allgather
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Allgather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                              void *recvbuf, int recvcount, MPI_Datatype recvtype, MPI_Comm comm)
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
            if ( sendbuf != MPI_IN_PLACE) {
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
                if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTERCOMM) {
                    MPIR_ERRTEST_SENDBUF_INPLACE(sendbuf, sendcount, mpi_errno);
                }
                MPIR_ERRTEST_COUNT(sendcount, mpi_errno);
                MPIR_ERRTEST_USERBUFFER(sendbuf, sendcount, sendtype, mpi_errno);
                if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM) {
                    if (sendtype == recvtype && sendcount == recvcount && sendcount != 0) {
                        MPI_Aint recvtype_size;
                        MPIR_Datatype_get_size_macro(recvtype, recvtype_size);
                        MPIR_ERRTEST_ALIAS_COLL(sendbuf, (char *) recvbuf + comm_ptr->rank * recvcount * recvtype_size, mpi_errno);
                    }
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
            MPIR_ERRTEST_RECVBUF_INPLACE(recvbuf, recvcount, mpi_errno);
            MPIR_ERRTEST_COUNT(recvcount, mpi_errno);
            MPIR_ERRTEST_USERBUFFER(recvbuf, recvcount, recvtype, mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM) {
        if ((sendcount == 0 && sendbuf != MPI_IN_PLACE) || recvcount == 0) {
            goto fn_exit;
        }
    }

    /* ... body of routine ... */
    MPIR_Errflag_t errflag = MPIR_ERR_NONE;
    mpi_errno = MPIR_Allgather(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm_ptr,
                               &errflag);
    if (mpi_errno) {
        goto fn_fail;
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
                                     "**mpi_allgather", "**mpi_allgather %p %d %D %p %d %D %C", sendbuf,
                                     sendcount, sendtype, recvbuf, recvcount, recvtype, comm);
#endif
    mpi_errno = MPIR_Err_return_comm(comm_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Allgather(QMPI_Context context, int tool_id, const void *sendbuf, int sendcount,
                   MPI_Datatype sendtype, void *recvbuf, int recvcount, MPI_Datatype recvtype,
                   MPI_Comm comm)
{
    return internal_Allgather(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Allgather(const void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf,
                  int recvcount, MPI_Datatype recvtype, MPI_Comm comm)
{
    QMPI_Context context;
    QMPI_Allgather_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Allgather(context, 0, sendbuf, sendcount, sendtype, recvbuf, recvcount,
                              recvtype, comm);

    fn_ptr = (QMPI_Allgather_t *) MPIR_QMPI_first_fn_ptrs[MPI_ALLGATHER_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_ALLGATHER_T], sendbuf, sendcount,
            sendtype, recvbuf, recvcount, recvtype, comm);
}
#else /* ENABLE_QMPI */
/*@
   MPI_Allgather - Gathers data from all tasks and distribute the combined data to all tasks

Input Parameters:
+ sendbuf - starting address of send buffer (choice)
. sendcount - number of elements in send buffer (non-negative integer)
. sendtype - data type of send buffer elements (handle)
. recvcount - number of elements received from any process (non-negative integer)
. recvtype - data type of receive buffer elements (handle)
- comm - communicator (handle)

Output Parameters:
. recvbuf - address of receive buffer (choice)

Notes:
 The MPI standard (1.0 and 1.1) says that
.n
.n
 The jth block of data sent from  each process is received by every process
 and placed in the jth block of the buffer 'recvbuf'.
.n
.n
 This is misleading; a better description is
.n
.n
 The block of data sent from the jth process is received by every
 process and placed in the jth block of the buffer 'recvbuf'.
.n
.n
 This text was suggested by Rajeev Thakur and has been adopted as a
 clarification by the MPI Forum.

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

int MPI_Allgather(const void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf,
                  int recvcount, MPI_Datatype recvtype, MPI_Comm comm)
{
    return internal_Allgather(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm);
}
#endif /* ENABLE_QMPI */

/* -- Begin Profiling Symbol Block for routine MPI_Allgather_c */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Allgather_c = PMPI_Allgather_c
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Allgather_c  MPI_Allgather_c
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Allgather_c as PMPI_Allgather_c
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Allgather_c(const void *sendbuf, MPI_Count sendcount, MPI_Datatype sendtype, void *recvbuf,
                    MPI_Count recvcount, MPI_Datatype recvtype, MPI_Comm comm)
                     __attribute__ ((weak, alias("PMPI_Allgather_c")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Allgather_c
#define MPI_Allgather_c PMPI_Allgather_c
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Allgather_c(const void *sendbuf, MPI_Count sendcount, MPI_Datatype sendtype,
                                void *recvbuf, MPI_Count recvcount, MPI_Datatype recvtype,
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
            if ( sendbuf != MPI_IN_PLACE) {
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
                if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTERCOMM) {
                    MPIR_ERRTEST_SENDBUF_INPLACE(sendbuf, sendcount, mpi_errno);
                }
                MPIR_ERRTEST_COUNT(sendcount, mpi_errno);
                MPIR_ERRTEST_USERBUFFER(sendbuf, sendcount, sendtype, mpi_errno);
                if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM) {
                    if (sendtype == recvtype && sendcount == recvcount && sendcount != 0) {
                        MPI_Aint recvtype_size;
                        MPIR_Datatype_get_size_macro(recvtype, recvtype_size);
                        MPIR_ERRTEST_ALIAS_COLL(sendbuf, (char *) recvbuf + comm_ptr->rank * recvcount * recvtype_size, mpi_errno);
                    }
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
            MPIR_ERRTEST_RECVBUF_INPLACE(recvbuf, recvcount, mpi_errno);
            MPIR_ERRTEST_COUNT(recvcount, mpi_errno);
            MPIR_ERRTEST_USERBUFFER(recvbuf, recvcount, recvtype, mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM) {
        if ((sendcount == 0 && sendbuf != MPI_IN_PLACE) || recvcount == 0) {
            goto fn_exit;
        }
    }

    /* ... body of routine ... */
    if (sizeof(MPI_Count) == sizeof(MPI_Aint)) {
        MPIR_Errflag_t errflag = MPIR_ERR_NONE;
        mpi_errno = MPIR_Allgather(sendbuf, (MPI_Aint) sendcount, sendtype, recvbuf, (MPI_Aint) recvcount,
                                   recvtype, comm_ptr, &errflag);
        if (mpi_errno) {
            goto fn_fail;
        }
    } else {
        /* MPI_Count is bigger than MPI_Aint */
        if (sendcount > MPIR_AINT_MAX) {
            mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE,
                                             __func__, __LINE__, MPI_ERR_OTHER,
                                             "**too_big_for_input",
                                             "**too_big_for_input %s", "sendcount");
            goto fn_fail;
        }
        if (recvcount > MPIR_AINT_MAX) {
            mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE,
                                             __func__, __LINE__, MPI_ERR_OTHER,
                                             "**too_big_for_input",
                                             "**too_big_for_input %s", "recvcount");
            goto fn_fail;
        }
        MPIR_Errflag_t errflag = MPIR_ERR_NONE;
        mpi_errno = MPIR_Allgather(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm_ptr,
                                   &errflag);
        if (mpi_errno) {
            goto fn_fail;
        }
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
                                     "**mpi_allgather_c", "**mpi_allgather_c %p %c %D %p %c %D %C",
                                     sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm);
#endif
    mpi_errno = MPIR_Err_return_comm(comm_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Allgather_c(QMPI_Context context, int tool_id, const void *sendbuf, MPI_Count sendcount,
                     MPI_Datatype sendtype, void *recvbuf, MPI_Count recvcount,
                     MPI_Datatype recvtype, MPI_Comm comm)
{
    return internal_Allgather_c(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Allgather_c(const void *sendbuf, MPI_Count sendcount, MPI_Datatype sendtype, void *recvbuf,
                    MPI_Count recvcount, MPI_Datatype recvtype, MPI_Comm comm)
{
    QMPI_Context context;
    QMPI_Allgather_c_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Allgather_c(context, 0, sendbuf, sendcount, sendtype, recvbuf, recvcount,
                                recvtype, comm);

    fn_ptr = (QMPI_Allgather_c_t *) MPIR_QMPI_first_fn_ptrs[MPI_ALLGATHER_C_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_ALLGATHER_C_T], sendbuf, sendcount,
            sendtype, recvbuf, recvcount, recvtype, comm);
}
#else /* ENABLE_QMPI */
/*@
   MPI_Allgather_c - Gathers data from all tasks and distribute the combined data to all tasks

Input Parameters:
+ sendbuf - starting address of send buffer (choice) (choice)
. sendcount - number of elements in send buffer (non-negative integer) (non-negative integer)
. sendtype - data type of send buffer elements (handle) (handle)
. recvcount - number of elements received from any process (non-negative integer) (non-negative integer)
. recvtype - data type of receive buffer elements (handle) (handle)
- comm - communicator (handle) (handle)

Output Parameters:
. recvbuf - address of receive buffer (choice) (choice)

Notes:
 The MPI standard (1.0 and 1.1) says that
.n
.n
 The jth block of data sent from  each process is received by every process
 and placed in the jth block of the buffer 'recvbuf'.
.n
.n
 This is misleading; a better description is
.n
.n
 The block of data sent from the jth process is received by every
 process and placed in the jth block of the buffer 'recvbuf'.
.n
.n
 This text was suggested by Rajeev Thakur and has been adopted as a
 clarification by the MPI Forum.

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

int MPI_Allgather_c(const void *sendbuf, MPI_Count sendcount, MPI_Datatype sendtype, void *recvbuf,
                    MPI_Count recvcount, MPI_Datatype recvtype, MPI_Comm comm)
{
    return internal_Allgather_c(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm);
}
#endif /* ENABLE_QMPI */
