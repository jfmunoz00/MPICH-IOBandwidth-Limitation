/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Bsend */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Bsend = PMPI_Bsend
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Bsend  MPI_Bsend
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Bsend as PMPI_Bsend
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Bsend(const void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
     __attribute__ ((weak, alias("PMPI_Bsend")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Bsend
#define MPI_Bsend PMPI_Bsend
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Bsend(const void *buf, int count, MPI_Datatype datatype, int dest, int tag,
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
            MPIR_ERRTEST_COUNT(count, mpi_errno);
            if (count > 0) {
                MPIR_ERRTEST_DATATYPE(datatype, "datatype", mpi_errno);
                if (!HANDLE_IS_BUILTIN(datatype)) {
                    MPIR_Datatype *datatype_ptr ATTRIBUTE((unused)) = NULL;
                    MPIR_Datatype_get_ptr(datatype, datatype_ptr);
                    MPIR_Datatype_valid_ptr(datatype_ptr, mpi_errno);
                    if (mpi_errno) {
                        goto fn_fail;
                    }
                    MPIR_Datatype_committed_ptr(datatype_ptr, mpi_errno);
                    if (mpi_errno) {
                        goto fn_fail;
                    }
                }
                MPIR_ERRTEST_USERBUFFER(buf, count, datatype, mpi_errno);
            }
            MPIR_ERRTEST_SEND_RANK(comm_ptr, dest, mpi_errno);
            MPIR_ERRTEST_SEND_TAG(tag, mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* Return immediately for dummy process */
    if (unlikely(dest == MPI_PROC_NULL)) {
        goto fn_exit;
    }

    /* ... body of routine ... */
    mpi_errno = MPIR_Bsend_isend(buf, count, datatype, dest, tag, comm_ptr, NULL);
    if (mpi_errno != MPI_SUCCESS)
        goto fn_fail;
    /* ... end of body of routine ... */

  fn_exit:
    MPIR_FUNC_TERSE_EXIT;
    MPID_THREAD_CS_EXIT(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    return mpi_errno;

  fn_fail:
    /* --BEGIN ERROR HANDLINE-- */
#ifdef HAVE_ERROR_CHECKING
    mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE, __func__, __LINE__, MPI_ERR_OTHER,
                                     "**mpi_bsend", "**mpi_bsend %p %d %D %i %t %C", buf, count,
                                     datatype, dest, tag, comm);
#endif
    mpi_errno = MPIR_Err_return_comm(comm_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Bsend(QMPI_Context context, int tool_id, const void *buf, int count, MPI_Datatype datatype,
               int dest, int tag, MPI_Comm comm)
{
    return internal_Bsend(buf, count, datatype, dest, tag, comm);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Bsend(const void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
    QMPI_Context context;
    QMPI_Bsend_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Bsend(context, 0, buf, count, datatype, dest, tag, comm);

    fn_ptr = (QMPI_Bsend_t *) MPIR_QMPI_first_fn_ptrs[MPI_BSEND_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_BSEND_T], buf, count, datatype, dest,
            tag, comm);
}
#else /* ENABLE_QMPI */
/*@
   MPI_Bsend - Basic send with user-provided buffering

Input Parameters:
+ buf - initial address of send buffer (choice)
. count - number of elements in send buffer (non-negative integer)
. datatype - datatype of each send buffer element (handle)
. dest - rank of destination (integer)
. tag - message tag (integer)
- comm - communicator (handle)

Notes:
This send is provided as a convenience function; it allows the user to
send messages without worring about where they are buffered (because the
user `must` have provided buffer space with 'MPI_Buffer_attach').

In deciding how much buffer space to allocate, remember that the buffer space
is not available for reuse by subsequent 'MPI_Bsend's unless you are certain
that the message
has been received (not just that it should have been received).  For example,
this code does not allocate enough buffer space
.vb
    MPI_Buffer_attach(b, n*sizeof(double) + MPI_BSEND_OVERHEAD);
    for (i=0; i<m; i++) {
        MPI_Bsend(buf, n, MPI_DOUBLE, ...);
    }
.ve
because only enough buffer space is provided for a single send, and the
loop may start a second 'MPI_Bsend' before the first is done making use of the
buffer.

In C, you can
force the messages to be delivered by
.vb
    MPI_Buffer_detach(&b, &n);
    MPI_Buffer_attach(b, n);
.ve
(The 'MPI_Buffer_detach' will not complete until all buffered messages are
delivered.)

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_BUFFER
.N MPI_ERR_COMM
.N MPI_ERR_COUNT
.N MPI_ERR_RANK
.N MPI_ERR_TAG
.N MPI_ERR_TYPE
.N MPI_ERR_OTHER

.seealso: MPI_Buffer_attach, MPI_Ibsend, MPI_Bsend_init
@*/

int MPI_Bsend(const void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
    return internal_Bsend(buf, count, datatype, dest, tag, comm);
}
#endif /* ENABLE_QMPI */

/* -- Begin Profiling Symbol Block for routine MPI_Bsend_c */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Bsend_c = PMPI_Bsend_c
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Bsend_c  MPI_Bsend_c
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Bsend_c as PMPI_Bsend_c
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Bsend_c(const void *buf, MPI_Count count, MPI_Datatype datatype, int dest, int tag,
                MPI_Comm comm)  __attribute__ ((weak, alias("PMPI_Bsend_c")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Bsend_c
#define MPI_Bsend_c PMPI_Bsend_c
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Bsend_c(const void *buf, MPI_Count count, MPI_Datatype datatype, int dest,
                            int tag, MPI_Comm comm)
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
            MPIR_ERRTEST_COUNT(count, mpi_errno);
            if (count > 0) {
                MPIR_ERRTEST_DATATYPE(datatype, "datatype", mpi_errno);
                if (!HANDLE_IS_BUILTIN(datatype)) {
                    MPIR_Datatype *datatype_ptr ATTRIBUTE((unused)) = NULL;
                    MPIR_Datatype_get_ptr(datatype, datatype_ptr);
                    MPIR_Datatype_valid_ptr(datatype_ptr, mpi_errno);
                    if (mpi_errno) {
                        goto fn_fail;
                    }
                    MPIR_Datatype_committed_ptr(datatype_ptr, mpi_errno);
                    if (mpi_errno) {
                        goto fn_fail;
                    }
                }
                MPIR_ERRTEST_USERBUFFER(buf, count, datatype, mpi_errno);
            }
            MPIR_ERRTEST_SEND_RANK(comm_ptr, dest, mpi_errno);
            MPIR_ERRTEST_SEND_TAG(tag, mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* Return immediately for dummy process */
    if (unlikely(dest == MPI_PROC_NULL)) {
        goto fn_exit;
    }

    /* ... body of routine ... */
    if (sizeof(MPI_Count) == sizeof(MPI_Aint)) {
        mpi_errno = MPIR_Bsend_isend(buf, count, datatype, dest, tag, comm_ptr, NULL);
        if (mpi_errno != MPI_SUCCESS)
            goto fn_fail;
    } else {
        /* MPI_Count is bigger than MPI_Aint */
        if (count > MPIR_AINT_MAX) {
            mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE,
                                             __func__, __LINE__, MPI_ERR_OTHER,
                                             "**too_big_for_input",
                                             "**too_big_for_input %s", "count");
            goto fn_fail;
        }
        mpi_errno = MPIR_Bsend_isend(buf, count, datatype, dest, tag, comm_ptr, NULL);
        if (mpi_errno != MPI_SUCCESS)
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
                                     "**mpi_bsend_c", "**mpi_bsend_c %p %c %D %i %t %C", buf, count,
                                     datatype, dest, tag, comm);
#endif
    mpi_errno = MPIR_Err_return_comm(comm_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Bsend_c(QMPI_Context context, int tool_id, const void *buf, MPI_Count count,
                 MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
    return internal_Bsend_c(buf, count, datatype, dest, tag, comm);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Bsend_c(const void *buf, MPI_Count count, MPI_Datatype datatype, int dest, int tag,
                MPI_Comm comm)
{
    QMPI_Context context;
    QMPI_Bsend_c_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Bsend_c(context, 0, buf, count, datatype, dest, tag, comm);

    fn_ptr = (QMPI_Bsend_c_t *) MPIR_QMPI_first_fn_ptrs[MPI_BSEND_C_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_BSEND_C_T], buf, count, datatype, dest,
            tag, comm);
}
#else /* ENABLE_QMPI */
/*@
   MPI_Bsend_c - Basic send with user-provided buffering

Input Parameters:
+ buf - initial address of send buffer (choice) (choice)
. count - number of elements in send buffer (non-negative integer) (non-negative integer)
. datatype - datatype of each send buffer element (handle) (handle)
. dest - rank of destination (integer) (integer)
. tag - message tag (integer) (integer)
- comm - communicator (handle) (handle)

Notes:
This send is provided as a convenience function; it allows the user to
send messages without worring about where they are buffered (because the
user `must` have provided buffer space with 'MPI_Buffer_attach').

In deciding how much buffer space to allocate, remember that the buffer space
is not available for reuse by subsequent 'MPI_Bsend's unless you are certain
that the message
has been received (not just that it should have been received).  For example,
this code does not allocate enough buffer space
.vb
    MPI_Buffer_attach(b, n*sizeof(double) + MPI_BSEND_OVERHEAD);
    for (i=0; i<m; i++) {
        MPI_Bsend(buf, n, MPI_DOUBLE, ...);
    }
.ve
because only enough buffer space is provided for a single send, and the
loop may start a second 'MPI_Bsend' before the first is done making use of the
buffer.

In C, you can
force the messages to be delivered by
.vb
    MPI_Buffer_detach(&b, &n);
    MPI_Buffer_attach(b, n);
.ve
(The 'MPI_Buffer_detach' will not complete until all buffered messages are
delivered.)

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_BUFFER
.N MPI_ERR_COMM
.N MPI_ERR_COUNT
.N MPI_ERR_RANK
.N MPI_ERR_TAG
.N MPI_ERR_TYPE
.N MPI_ERR_OTHER

.seealso: MPI_Buffer_attach, MPI_Ibsend, MPI_Bsend_init
@*/

int MPI_Bsend_c(const void *buf, MPI_Count count, MPI_Datatype datatype, int dest, int tag,
                MPI_Comm comm)
{
    return internal_Bsend_c(buf, count, datatype, dest, tag, comm);
}
#endif /* ENABLE_QMPI */
