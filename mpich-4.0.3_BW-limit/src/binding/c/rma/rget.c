/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Rget */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Rget = PMPI_Rget
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Rget  MPI_Rget
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Rget as PMPI_Rget
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Rget(void *origin_addr, int origin_count, MPI_Datatype origin_datatype, int target_rank,
             MPI_Aint target_disp, int target_count, MPI_Datatype target_datatype, MPI_Win win,
             MPI_Request *request)  __attribute__ ((weak, alias("PMPI_Rget")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Rget
#define MPI_Rget PMPI_Rget
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Rget(void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                         int target_rank, MPI_Aint target_disp, int target_count,
                         MPI_Datatype target_datatype, MPI_Win win, MPI_Request *request)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Win *win_ptr ATTRIBUTE((unused)) = NULL;

    MPIR_ERRTEST_INITIALIZED_ORDIE();

    MPID_THREAD_CS_ENTER(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    MPIR_FUNC_TERSE_ENTER;

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_ERRTEST_WIN(win, mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    MPIR_Win_get_ptr(win, win_ptr);

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_Win_valid_ptr(win_ptr, mpi_errno);
            if (mpi_errno) {
                goto fn_fail;
            }
            MPIR_ERRTEST_COUNT(origin_count, mpi_errno);
            MPIR_ERRTEST_DATATYPE(origin_datatype, "datatype", mpi_errno);
            if (!HANDLE_IS_BUILTIN(origin_datatype)) {
                MPIR_Datatype *datatype_ptr ATTRIBUTE((unused)) = NULL;
                MPIR_Datatype_get_ptr(origin_datatype, datatype_ptr);
                MPIR_Datatype_valid_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
                MPIR_Datatype_committed_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
            }
            MPIR_ERRTEST_USERBUFFER(origin_addr, origin_count, origin_datatype, mpi_errno);
            MPIR_ERRTEST_SEND_RANK(win_ptr->comm_ptr, target_rank, mpi_errno);
            if (win_ptr->create_flavor != MPI_WIN_FLAVOR_DYNAMIC) {
                MPIR_ERRTEST_DISP(target_disp, mpi_errno);
            }
            MPIR_ERRTEST_COUNT(target_count, mpi_errno);
            MPIR_ERRTEST_DATATYPE(target_datatype, "datatype", mpi_errno);
            if (!HANDLE_IS_BUILTIN(target_datatype)) {
                MPIR_Datatype *datatype_ptr ATTRIBUTE((unused)) = NULL;
                MPIR_Datatype_get_ptr(target_datatype, datatype_ptr);
                MPIR_Datatype_valid_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
                MPIR_Datatype_committed_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
            }
            MPIR_ERRTEST_ARGNULL(request, "request", mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* Return immediately for dummy process */
    if (unlikely(target_rank == MPI_PROC_NULL)) {
        MPIR_Request *lw_req = MPIR_Request_create_complete(MPIR_REQUEST_KIND__RMA);
        MPIR_ERR_CHKANDSTMT(lw_req == NULL, mpi_errno, MPIX_ERR_NOREQ, goto fn_fail,
                            "**nomemreq");
        *request = lw_req->handle;
        goto fn_exit;
    }

    /* ... body of routine ... */
    MPIR_Request *request_ptr ATTRIBUTE((unused)) = NULL;
    *request = MPI_REQUEST_NULL;
    mpi_errno = MPID_Rget(origin_addr, origin_count, origin_datatype, target_rank, target_disp,
                          target_count, target_datatype, win_ptr, &request_ptr);
    if (mpi_errno) {
        goto fn_fail;
    }
    if (request_ptr) {
        MPIR_OBJ_PUBLISH_HANDLE(*request, request_ptr->handle);
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
                                     "**mpi_rget", "**mpi_rget %p %d %D %d %L %d %D %W %p", origin_addr,
                                     origin_count, origin_datatype, target_rank,
                                     (long long) target_disp, target_count, target_datatype, win,
                                     request);
#endif
    mpi_errno = MPIR_Err_return_win(win_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Rget(QMPI_Context context, int tool_id, void *origin_addr, int origin_count,
              MPI_Datatype origin_datatype, int target_rank, MPI_Aint target_disp, int target_count,
              MPI_Datatype target_datatype, MPI_Win win, MPI_Request *request)
{
    return internal_Rget(origin_addr, origin_count, origin_datatype, target_rank, target_disp, target_count, target_datatype, win, request);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Rget(void *origin_addr, int origin_count, MPI_Datatype origin_datatype, int target_rank,
             MPI_Aint target_disp, int target_count, MPI_Datatype target_datatype, MPI_Win win,
             MPI_Request *request)
{
    QMPI_Context context;
    QMPI_Rget_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Rget(context, 0, origin_addr, origin_count, origin_datatype, target_rank,
                         target_disp, target_count, target_datatype, win, request);

    fn_ptr = (QMPI_Rget_t *) MPIR_QMPI_first_fn_ptrs[MPI_RGET_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_RGET_T], origin_addr, origin_count,
            origin_datatype, target_rank, target_disp, target_count, target_datatype, win,
            request);
}
#else /* ENABLE_QMPI */
/*@
   MPI_Rget - Get data from a memory window on a remote process

Input Parameters:
+ origin_count - number of entries in origin buffer (non-negative integer)
. origin_datatype - datatype of each entry in origin buffer (handle)
. target_rank - rank of target (non-negative integer)
. target_disp - displacement from window start to the beginning of the target buffer (non-negative integer)
. target_count - number of entries in target buffer (non-negative integer)
. target_datatype - datatype of each entry in target buffer (handle)
- win - window object used for communication (handle)

Output Parameters:
+ origin_addr - initial address of origin buffer (choice)
- request - RMA request (handle)

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_ARG
.N MPI_ERR_BUFFER
.N MPI_ERR_COUNT
.N MPI_ERR_DISP
.N MPI_ERR_RANK
.N MPI_ERR_TYPE
.N MPI_ERR_WIN
.N MPI_ERR_OTHER

.seealso: MPI_Get
@*/

int MPI_Rget(void *origin_addr, int origin_count, MPI_Datatype origin_datatype, int target_rank,
             MPI_Aint target_disp, int target_count, MPI_Datatype target_datatype, MPI_Win win,
             MPI_Request *request)
{
    return internal_Rget(origin_addr, origin_count, origin_datatype, target_rank, target_disp, target_count, target_datatype, win, request);
}
#endif /* ENABLE_QMPI */

/* -- Begin Profiling Symbol Block for routine MPI_Rget_c */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Rget_c = PMPI_Rget_c
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Rget_c  MPI_Rget_c
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Rget_c as PMPI_Rget_c
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Rget_c(void *origin_addr, MPI_Count origin_count, MPI_Datatype origin_datatype,
               int target_rank, MPI_Aint target_disp, MPI_Count target_count,
               MPI_Datatype target_datatype, MPI_Win win, MPI_Request *request)
                __attribute__ ((weak, alias("PMPI_Rget_c")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Rget_c
#define MPI_Rget_c PMPI_Rget_c
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Rget_c(void *origin_addr, MPI_Count origin_count, MPI_Datatype origin_datatype,
                           int target_rank, MPI_Aint target_disp, MPI_Count target_count,
                           MPI_Datatype target_datatype, MPI_Win win, MPI_Request *request)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Win *win_ptr ATTRIBUTE((unused)) = NULL;

    MPIR_ERRTEST_INITIALIZED_ORDIE();

    MPID_THREAD_CS_ENTER(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    MPIR_FUNC_TERSE_ENTER;

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_ERRTEST_WIN(win, mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    MPIR_Win_get_ptr(win, win_ptr);

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_Win_valid_ptr(win_ptr, mpi_errno);
            if (mpi_errno) {
                goto fn_fail;
            }
            MPIR_ERRTEST_COUNT(origin_count, mpi_errno);
            MPIR_ERRTEST_DATATYPE(origin_datatype, "datatype", mpi_errno);
            if (!HANDLE_IS_BUILTIN(origin_datatype)) {
                MPIR_Datatype *datatype_ptr ATTRIBUTE((unused)) = NULL;
                MPIR_Datatype_get_ptr(origin_datatype, datatype_ptr);
                MPIR_Datatype_valid_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
                MPIR_Datatype_committed_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
            }
            MPIR_ERRTEST_USERBUFFER(origin_addr, origin_count, origin_datatype, mpi_errno);
            MPIR_ERRTEST_SEND_RANK(win_ptr->comm_ptr, target_rank, mpi_errno);
            if (win_ptr->create_flavor != MPI_WIN_FLAVOR_DYNAMIC) {
                MPIR_ERRTEST_DISP(target_disp, mpi_errno);
            }
            MPIR_ERRTEST_COUNT(target_count, mpi_errno);
            MPIR_ERRTEST_DATATYPE(target_datatype, "datatype", mpi_errno);
            if (!HANDLE_IS_BUILTIN(target_datatype)) {
                MPIR_Datatype *datatype_ptr ATTRIBUTE((unused)) = NULL;
                MPIR_Datatype_get_ptr(target_datatype, datatype_ptr);
                MPIR_Datatype_valid_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
                MPIR_Datatype_committed_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
            }
            MPIR_ERRTEST_ARGNULL(request, "request", mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* Return immediately for dummy process */
    if (unlikely(target_rank == MPI_PROC_NULL)) {
        MPIR_Request *lw_req = MPIR_Request_create_complete(MPIR_REQUEST_KIND__RMA);
        MPIR_ERR_CHKANDSTMT(lw_req == NULL, mpi_errno, MPIX_ERR_NOREQ, goto fn_fail,
                            "**nomemreq");
        *request = lw_req->handle;
        goto fn_exit;
    }

    /* ... body of routine ... */
    if (sizeof(MPI_Count) == sizeof(MPI_Aint)) {
        MPIR_Request *request_ptr ATTRIBUTE((unused)) = NULL;
        *request = MPI_REQUEST_NULL;
        mpi_errno = MPID_Rget(origin_addr, (MPI_Aint) origin_count, origin_datatype, target_rank,
                              target_disp, (MPI_Aint) target_count, target_datatype, win_ptr,
                              &request_ptr);
        if (mpi_errno) {
            goto fn_fail;
        }
        if (request_ptr) {
            MPIR_OBJ_PUBLISH_HANDLE(*request, request_ptr->handle);
        }
    } else {
        /* MPI_Count is bigger than MPI_Aint */
        if (origin_count > MPIR_AINT_MAX) {
            mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE,
                                             __func__, __LINE__, MPI_ERR_OTHER,
                                             "**too_big_for_input",
                                             "**too_big_for_input %s", "origin_count");
            goto fn_fail;
        }
        if (target_count > MPIR_AINT_MAX) {
            mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE,
                                             __func__, __LINE__, MPI_ERR_OTHER,
                                             "**too_big_for_input",
                                             "**too_big_for_input %s", "target_count");
            goto fn_fail;
        }
        MPIR_Request *request_ptr ATTRIBUTE((unused)) = NULL;
        *request = MPI_REQUEST_NULL;
        mpi_errno = MPID_Rget(origin_addr, origin_count, origin_datatype, target_rank, target_disp,
                              target_count, target_datatype, win_ptr, &request_ptr);
        if (mpi_errno) {
            goto fn_fail;
        }
        if (request_ptr) {
            MPIR_OBJ_PUBLISH_HANDLE(*request, request_ptr->handle);
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
                                     "**mpi_rget_c", "**mpi_rget_c %p %c %D %d %L %c %D %W %p",
                                     origin_addr, origin_count, origin_datatype, target_rank,
                                     (long long) target_disp, target_count, target_datatype, win,
                                     request);
#endif
    mpi_errno = MPIR_Err_return_win(win_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Rget_c(QMPI_Context context, int tool_id, void *origin_addr, MPI_Count origin_count,
                MPI_Datatype origin_datatype, int target_rank, MPI_Aint target_disp,
                MPI_Count target_count, MPI_Datatype target_datatype, MPI_Win win,
                MPI_Request *request)
{
    return internal_Rget_c(origin_addr, origin_count, origin_datatype, target_rank, target_disp, target_count, target_datatype, win, request);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Rget_c(void *origin_addr, MPI_Count origin_count, MPI_Datatype origin_datatype,
               int target_rank, MPI_Aint target_disp, MPI_Count target_count,
               MPI_Datatype target_datatype, MPI_Win win, MPI_Request *request)
{
    QMPI_Context context;
    QMPI_Rget_c_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Rget_c(context, 0, origin_addr, origin_count, origin_datatype, target_rank,
                           target_disp, target_count, target_datatype, win, request);

    fn_ptr = (QMPI_Rget_c_t *) MPIR_QMPI_first_fn_ptrs[MPI_RGET_C_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_RGET_C_T], origin_addr, origin_count,
            origin_datatype, target_rank, target_disp, target_count, target_datatype, win,
            request);
}
#else /* ENABLE_QMPI */
/*@
   MPI_Rget_c - Get data from a memory window on a remote process

Input Parameters:
+ origin_count - number of entries in origin buffer (non-negative integer) (non-negative integer)
. origin_datatype - datatype of each entry in origin buffer (handle) (handle)
. target_rank - rank of target (non-negative integer) (non-negative integer)
. target_disp - displacement from window start to the beginning of the target buffer (non-negative integer) (non-negative integer)
. target_count - number of entries in target buffer (non-negative integer) (non-negative integer)
. target_datatype - datatype of each entry in target buffer (handle) (handle)
- win - window object used for communication (handle) (handle)

Output Parameters:
+ origin_addr - initial address of origin buffer (choice) (choice)
- request - RMA request (handle) (handle)

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_ARG
.N MPI_ERR_BUFFER
.N MPI_ERR_COUNT
.N MPI_ERR_DISP
.N MPI_ERR_RANK
.N MPI_ERR_TYPE
.N MPI_ERR_WIN
.N MPI_ERR_OTHER

.seealso: MPI_Get
@*/

int MPI_Rget_c(void *origin_addr, MPI_Count origin_count, MPI_Datatype origin_datatype,
               int target_rank, MPI_Aint target_disp, MPI_Count target_count,
               MPI_Datatype target_datatype, MPI_Win win, MPI_Request *request)
{
    return internal_Rget_c(origin_addr, origin_count, origin_datatype, target_rank, target_disp, target_count, target_datatype, win, request);
}
#endif /* ENABLE_QMPI */
