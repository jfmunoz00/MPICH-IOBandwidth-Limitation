/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Get_accumulate */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Get_accumulate = PMPI_Get_accumulate
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Get_accumulate  MPI_Get_accumulate
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Get_accumulate as PMPI_Get_accumulate
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Get_accumulate(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                       void *result_addr, int result_count, MPI_Datatype result_datatype,
                       int target_rank, MPI_Aint target_disp, int target_count,
                       MPI_Datatype target_datatype, MPI_Op op, MPI_Win win)
                        __attribute__ ((weak, alias("PMPI_Get_accumulate")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Get_accumulate
#define MPI_Get_accumulate PMPI_Get_accumulate
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Get_accumulate(const void *origin_addr, int origin_count,
                                   MPI_Datatype origin_datatype, void *result_addr,
                                   int result_count, MPI_Datatype result_datatype, int target_rank,
                                   MPI_Aint target_disp, int target_count,
                                   MPI_Datatype target_datatype, MPI_Op op, MPI_Win win)
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
            if (op != MPI_NO_OP) {
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
            }
            MPIR_ERRTEST_COUNT(result_count, mpi_errno);
            MPIR_ERRTEST_DATATYPE(result_datatype, "datatype", mpi_errno);
            if (!HANDLE_IS_BUILTIN(result_datatype)) {
                MPIR_Datatype *datatype_ptr ATTRIBUTE((unused)) = NULL;
                MPIR_Datatype_get_ptr(result_datatype, datatype_ptr);
                MPIR_Datatype_valid_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
                MPIR_Datatype_committed_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
            }
            MPIR_ERRTEST_USERBUFFER(result_addr, result_count, result_datatype, mpi_errno);
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
            MPIR_ERRTEST_OP_GACC(op, mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* Return immediately for dummy process */
    if (unlikely(target_rank == MPI_PROC_NULL)) {
        goto fn_exit;
    }

    /* ... body of routine ... */
    mpi_errno = MPID_Get_accumulate(origin_addr, origin_count, origin_datatype, result_addr,
                                    result_count, result_datatype, target_rank, target_disp,
                                    target_count, target_datatype, op, win_ptr);
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
                                     "**mpi_get_accumulate",
                                     "**mpi_get_accumulate %p %d %D %p %d %D %d %L %d %D %O %W",
                                     origin_addr, origin_count, origin_datatype, result_addr,
                                     result_count, result_datatype, target_rank,
                                     (long long) target_disp, target_count, target_datatype, op, win);
#endif
    mpi_errno = MPIR_Err_return_win(win_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Get_accumulate(QMPI_Context context, int tool_id, const void *origin_addr,
                        int origin_count, MPI_Datatype origin_datatype, void *result_addr,
                        int result_count, MPI_Datatype result_datatype, int target_rank,
                        MPI_Aint target_disp, int target_count, MPI_Datatype target_datatype,
                        MPI_Op op, MPI_Win win)
{
    return internal_Get_accumulate(origin_addr, origin_count, origin_datatype, result_addr, result_count, result_datatype, target_rank, target_disp, target_count, target_datatype, op, win);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Get_accumulate(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                       void *result_addr, int result_count, MPI_Datatype result_datatype,
                       int target_rank, MPI_Aint target_disp, int target_count,
                       MPI_Datatype target_datatype, MPI_Op op, MPI_Win win)
{
    QMPI_Context context;
    QMPI_Get_accumulate_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Get_accumulate(context, 0, origin_addr, origin_count, origin_datatype,
                                   result_addr, result_count, result_datatype, target_rank,
                                   target_disp, target_count, target_datatype, op, win);

    fn_ptr = (QMPI_Get_accumulate_t *) MPIR_QMPI_first_fn_ptrs[MPI_GET_ACCUMULATE_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_GET_ACCUMULATE_T], origin_addr,
            origin_count, origin_datatype, result_addr, result_count, result_datatype, target_rank,
            target_disp, target_count, target_datatype, op, win);
}
#else /* ENABLE_QMPI */
/*@
   MPI_Get_accumulate - Perform an atomic, one-sided read-and-accumulate operation

Input Parameters:
+ origin_addr - initial address of buffer (choice)
. origin_count - number of entries in origin buffer (non-negative integer)
. origin_datatype - datatype of each entry in origin buffer (handle)
. result_count - number of entries in result buffer (non-negative integer)
. result_datatype - datatype of each entry in result buffer (handle)
. target_rank - rank of target (non-negative integer)
. target_disp - displacement from start of window to beginning of target buffer (non-negative integer)
. target_count - number of entries in target buffer (non-negative integer)
. target_datatype - datatype of each entry in target buffer (handle)
. op - reduce operation (handle)
- win - window object (handle)

Output Parameters:
. result_addr - initial address of result buffer (choice)

Notes:
This operations is atomic with respect to other "accumulate" operations.

The get and accumulate steps are executed atomically for each basic element in
the datatype (see MPI 3.0 Section 11.7 for details). The predefined operation
'MPI_REPLACE' provides fetch-and-set behavior.

The origin and result buffers (origin_addr and result_addr) must be disjoint.
Each datatype argument must be a predefined datatype or a derived datatype
where all basic components are of the same predefined datatype. All datatype
arguments must be constructed from the same predefined datatype. The
operation op applies to elements of that predefined type. target_datatype must
not specify overlapping entries, and the target buffer must fit in the target
window or in attached memory in a dynamic window.

Any of the predefined operations for 'MPI_Reduce', as well as 'MPI_NO_OP' or
'MPI_REPLACE' can be specified as op. User-defined functions cannot be used. A
new predefined operation, 'MPI_NO_OP', is defined. It corresponds to the
associative function f (a, b) = a; i.e., the current value in the target memory
is returned in the result buffer at the origin and no operation is performed on
the target buffer. 'MPI_NO_OP' can be used only in 'MPI_Get_accumulate',
'MPI_Rget_accumulate', and 'MPI_Fetch_and_op'. 'MPI_NO_OP' cannot be used in
'MPI_Accumulate', 'MPI_Raccumulate', or collective reduction operations, such as
'MPI_Reduce' and others.

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_BUFFER
.N MPI_ERR_COUNT
.N MPI_ERR_DISP
.N MPI_ERR_RANK
.N MPI_ERR_TYPE
.N MPI_ERR_WIN
.N MPI_ERR_OTHER

.seealso: MPI_Rget_accumulate MPI_Fetch_and_op
@*/

int MPI_Get_accumulate(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                       void *result_addr, int result_count, MPI_Datatype result_datatype,
                       int target_rank, MPI_Aint target_disp, int target_count,
                       MPI_Datatype target_datatype, MPI_Op op, MPI_Win win)
{
    return internal_Get_accumulate(origin_addr, origin_count, origin_datatype, result_addr, result_count, result_datatype, target_rank, target_disp, target_count, target_datatype, op, win);
}
#endif /* ENABLE_QMPI */

/* -- Begin Profiling Symbol Block for routine MPI_Get_accumulate_c */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Get_accumulate_c = PMPI_Get_accumulate_c
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Get_accumulate_c  MPI_Get_accumulate_c
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Get_accumulate_c as PMPI_Get_accumulate_c
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Get_accumulate_c(const void *origin_addr, MPI_Count origin_count,
                         MPI_Datatype origin_datatype, void *result_addr, MPI_Count result_count,
                         MPI_Datatype result_datatype, int target_rank, MPI_Aint target_disp,
                         MPI_Count target_count, MPI_Datatype target_datatype, MPI_Op op,
                         MPI_Win win)  __attribute__ ((weak, alias("PMPI_Get_accumulate_c")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Get_accumulate_c
#define MPI_Get_accumulate_c PMPI_Get_accumulate_c
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Get_accumulate_c(const void *origin_addr, MPI_Count origin_count,
                                     MPI_Datatype origin_datatype, void *result_addr,
                                     MPI_Count result_count, MPI_Datatype result_datatype,
                                     int target_rank, MPI_Aint target_disp, MPI_Count target_count,
                                     MPI_Datatype target_datatype, MPI_Op op, MPI_Win win)
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
            if (op != MPI_NO_OP) {
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
            }
            MPIR_ERRTEST_COUNT(result_count, mpi_errno);
            MPIR_ERRTEST_DATATYPE(result_datatype, "datatype", mpi_errno);
            if (!HANDLE_IS_BUILTIN(result_datatype)) {
                MPIR_Datatype *datatype_ptr ATTRIBUTE((unused)) = NULL;
                MPIR_Datatype_get_ptr(result_datatype, datatype_ptr);
                MPIR_Datatype_valid_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
                MPIR_Datatype_committed_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
            }
            MPIR_ERRTEST_USERBUFFER(result_addr, result_count, result_datatype, mpi_errno);
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
            MPIR_ERRTEST_OP_GACC(op, mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* Return immediately for dummy process */
    if (unlikely(target_rank == MPI_PROC_NULL)) {
        goto fn_exit;
    }

    /* ... body of routine ... */
    if (sizeof(MPI_Count) == sizeof(MPI_Aint)) {
        mpi_errno = MPID_Get_accumulate(origin_addr, (MPI_Aint) origin_count, origin_datatype, result_addr,
                                        (MPI_Aint) result_count, result_datatype, target_rank, target_disp,
                                        (MPI_Aint) target_count, target_datatype, op, win_ptr);
        if (mpi_errno) {
            goto fn_fail;
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
        if (result_count > MPIR_AINT_MAX) {
            mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE,
                                             __func__, __LINE__, MPI_ERR_OTHER,
                                             "**too_big_for_input",
                                             "**too_big_for_input %s", "result_count");
            goto fn_fail;
        }
        if (target_count > MPIR_AINT_MAX) {
            mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE,
                                             __func__, __LINE__, MPI_ERR_OTHER,
                                             "**too_big_for_input",
                                             "**too_big_for_input %s", "target_count");
            goto fn_fail;
        }
        mpi_errno = MPID_Get_accumulate(origin_addr, origin_count, origin_datatype, result_addr,
                                        result_count, result_datatype, target_rank, target_disp,
                                        target_count, target_datatype, op, win_ptr);
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
                                     "**mpi_get_accumulate_c",
                                     "**mpi_get_accumulate_c %p %c %D %p %c %D %d %L %c %D %O %W",
                                     origin_addr, origin_count, origin_datatype, result_addr,
                                     result_count, result_datatype, target_rank,
                                     (long long) target_disp, target_count, target_datatype, op, win);
#endif
    mpi_errno = MPIR_Err_return_win(win_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Get_accumulate_c(QMPI_Context context, int tool_id, const void *origin_addr,
                          MPI_Count origin_count, MPI_Datatype origin_datatype, void *result_addr,
                          MPI_Count result_count, MPI_Datatype result_datatype, int target_rank,
                          MPI_Aint target_disp, MPI_Count target_count,
                          MPI_Datatype target_datatype, MPI_Op op, MPI_Win win)
{
    return internal_Get_accumulate_c(origin_addr, origin_count, origin_datatype, result_addr, result_count, result_datatype, target_rank, target_disp, target_count, target_datatype, op, win);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Get_accumulate_c(const void *origin_addr, MPI_Count origin_count,
                         MPI_Datatype origin_datatype, void *result_addr, MPI_Count result_count,
                         MPI_Datatype result_datatype, int target_rank, MPI_Aint target_disp,
                         MPI_Count target_count, MPI_Datatype target_datatype, MPI_Op op,
                         MPI_Win win)
{
    QMPI_Context context;
    QMPI_Get_accumulate_c_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Get_accumulate_c(context, 0, origin_addr, origin_count, origin_datatype,
                                     result_addr, result_count, result_datatype, target_rank,
                                     target_disp, target_count, target_datatype, op, win);

    fn_ptr = (QMPI_Get_accumulate_c_t *) MPIR_QMPI_first_fn_ptrs[MPI_GET_ACCUMULATE_C_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_GET_ACCUMULATE_C_T], origin_addr,
            origin_count, origin_datatype, result_addr, result_count, result_datatype, target_rank,
            target_disp, target_count, target_datatype, op, win);
}
#else /* ENABLE_QMPI */
/*@
   MPI_Get_accumulate_c - Perform an atomic, one-sided read-and-accumulate operation

Input Parameters:
+ origin_addr - initial address of buffer (choice) (choice)
. origin_count - number of entries in origin buffer (non-negative integer) (non-negative integer)
. origin_datatype - datatype of each entry in origin buffer (handle) (handle)
. result_count - number of entries in result buffer (non-negative integer) (non-negative integer)
. result_datatype - datatype of each entry in result buffer (handle) (handle)
. target_rank - rank of target (non-negative integer) (non-negative integer)
. target_disp - displacement from start of window to beginning of target buffer (non-negative integer) (non-negative integer)
. target_count - number of entries in target buffer (non-negative integer) (non-negative integer)
. target_datatype - datatype of each entry in target buffer (handle) (handle)
. op - reduce operation (handle) (handle)
- win - window object (handle) (handle)

Output Parameters:
. result_addr - initial address of result buffer (choice) (choice)

Notes:
This operations is atomic with respect to other "accumulate" operations.

The get and accumulate steps are executed atomically for each basic element in
the datatype (see MPI 3.0 Section 11.7 for details). The predefined operation
'MPI_REPLACE' provides fetch-and-set behavior.

The origin and result buffers (origin_addr and result_addr) must be disjoint.
Each datatype argument must be a predefined datatype or a derived datatype
where all basic components are of the same predefined datatype. All datatype
arguments must be constructed from the same predefined datatype. The
operation op applies to elements of that predefined type. target_datatype must
not specify overlapping entries, and the target buffer must fit in the target
window or in attached memory in a dynamic window.

Any of the predefined operations for 'MPI_Reduce', as well as 'MPI_NO_OP' or
'MPI_REPLACE' can be specified as op. User-defined functions cannot be used. A
new predefined operation, 'MPI_NO_OP', is defined. It corresponds to the
associative function f (a, b) = a; i.e., the current value in the target memory
is returned in the result buffer at the origin and no operation is performed on
the target buffer. 'MPI_NO_OP' can be used only in 'MPI_Get_accumulate',
'MPI_Rget_accumulate', and 'MPI_Fetch_and_op'. 'MPI_NO_OP' cannot be used in
'MPI_Accumulate', 'MPI_Raccumulate', or collective reduction operations, such as
'MPI_Reduce' and others.

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_BUFFER
.N MPI_ERR_COUNT
.N MPI_ERR_DISP
.N MPI_ERR_RANK
.N MPI_ERR_TYPE
.N MPI_ERR_WIN
.N MPI_ERR_OTHER

.seealso: MPI_Rget_accumulate MPI_Fetch_and_op
@*/

int MPI_Get_accumulate_c(const void *origin_addr, MPI_Count origin_count,
                         MPI_Datatype origin_datatype, void *result_addr, MPI_Count result_count,
                         MPI_Datatype result_datatype, int target_rank, MPI_Aint target_disp,
                         MPI_Count target_count, MPI_Datatype target_datatype, MPI_Op op,
                         MPI_Win win)
{
    return internal_Get_accumulate_c(origin_addr, origin_count, origin_datatype, result_addr, result_count, result_datatype, target_rank, target_disp, target_count, target_datatype, op, win);
}
#endif /* ENABLE_QMPI */
