/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Pack_size */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Pack_size = PMPI_Pack_size
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Pack_size  MPI_Pack_size
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Pack_size as PMPI_Pack_size
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Pack_size(int incount, MPI_Datatype datatype, MPI_Comm comm, int *size)
     __attribute__ ((weak, alias("PMPI_Pack_size")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Pack_size
#define MPI_Pack_size PMPI_Pack_size
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Pack_size(int incount, MPI_Datatype datatype, MPI_Comm comm, int *size)
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
            MPIR_ERRTEST_COUNT(incount, mpi_errno);
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
            MPIR_ERRTEST_ARGNULL(size, "size", mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    MPI_Aint size_c;
    mpi_errno = MPIR_Pack_size_impl(incount, datatype, comm_ptr, &size_c);
    if (mpi_errno) {
        goto fn_fail;
    }
    if (size_c > INT_MAX) {
        *size = MPI_UNDEFINED;
    } else {
        *size = size_c;
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
                                     "**mpi_pack_size", "**mpi_pack_size %d %D %C %p", incount,
                                     datatype, comm, size);
#endif
    mpi_errno = MPIR_Err_return_comm(comm_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Pack_size(QMPI_Context context, int tool_id, int incount, MPI_Datatype datatype,
                   MPI_Comm comm, int *size)
{
    return internal_Pack_size(incount, datatype, comm, size);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Pack_size(int incount, MPI_Datatype datatype, MPI_Comm comm, int *size)
{
    QMPI_Context context;
    QMPI_Pack_size_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Pack_size(context, 0, incount, datatype, comm, size);

    fn_ptr = (QMPI_Pack_size_t *) MPIR_QMPI_first_fn_ptrs[MPI_PACK_SIZE_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_PACK_SIZE_T], incount, datatype, comm,
            size);
}
#else /* ENABLE_QMPI */
/*@
   MPI_Pack_size - Returns the upper bound on the amount of space needed to pack a message

Input Parameters:
+ incount - count argument to packing call (non-negative integer)
. datatype - datatype argument to packing call (handle)
- comm - communicator argument to packing call (handle)

Output Parameters:
. size - upper bound on size of packed message, in bytes (non-negative integer)

Notes:
The MPI standard document describes this in terms of 'MPI_Pack', but it
applies to both 'MPI_Pack' and 'MPI_Unpack'.  That is, the value 'size' is
the maximum that is needed by either 'MPI_Pack' or 'MPI_Unpack'.

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_ARG
.N MPI_ERR_COMM
.N MPI_ERR_COUNT
.N MPI_ERR_TYPE
.N MPI_ERR_OTHER

@*/

int MPI_Pack_size(int incount, MPI_Datatype datatype, MPI_Comm comm, int *size)
{
    return internal_Pack_size(incount, datatype, comm, size);
}
#endif /* ENABLE_QMPI */

/* -- Begin Profiling Symbol Block for routine MPI_Pack_size_c */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Pack_size_c = PMPI_Pack_size_c
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Pack_size_c  MPI_Pack_size_c
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Pack_size_c as PMPI_Pack_size_c
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Pack_size_c(MPI_Count incount, MPI_Datatype datatype, MPI_Comm comm, MPI_Count *size)
     __attribute__ ((weak, alias("PMPI_Pack_size_c")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Pack_size_c
#define MPI_Pack_size_c PMPI_Pack_size_c
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Pack_size_c(MPI_Count incount, MPI_Datatype datatype, MPI_Comm comm,
                                MPI_Count *size)
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
            MPIR_ERRTEST_COUNT(incount, mpi_errno);
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
            MPIR_ERRTEST_ARGNULL(size, "size", mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    if (sizeof(MPI_Count) == sizeof(MPI_Aint)) {
        mpi_errno = MPIR_Pack_size_impl((MPI_Aint) incount, datatype, comm_ptr, (MPI_Aint *) size);
        if (mpi_errno) {
            goto fn_fail;
        }
    } else {
        /* MPI_Count is bigger than MPI_Aint */
        if (incount > MPIR_AINT_MAX) {
            mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE,
                                             __func__, __LINE__, MPI_ERR_OTHER,
                                             "**too_big_for_input",
                                             "**too_big_for_input %s", "incount");
            goto fn_fail;
        }
        MPI_Aint size_c;
        mpi_errno = MPIR_Pack_size_impl(incount, datatype, comm_ptr, &size_c);
        if (mpi_errno) {
            goto fn_fail;
        }
        *size = size_c;
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
                                     "**mpi_pack_size_c", "**mpi_pack_size_c %c %D %C %p", incount,
                                     datatype, comm, size);
#endif
    mpi_errno = MPIR_Err_return_comm(comm_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Pack_size_c(QMPI_Context context, int tool_id, MPI_Count incount, MPI_Datatype datatype,
                     MPI_Comm comm, MPI_Count *size)
{
    return internal_Pack_size_c(incount, datatype, comm, size);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Pack_size_c(MPI_Count incount, MPI_Datatype datatype, MPI_Comm comm, MPI_Count *size)
{
    QMPI_Context context;
    QMPI_Pack_size_c_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Pack_size_c(context, 0, incount, datatype, comm, size);

    fn_ptr = (QMPI_Pack_size_c_t *) MPIR_QMPI_first_fn_ptrs[MPI_PACK_SIZE_C_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_PACK_SIZE_C_T], incount, datatype, comm,
            size);
}
#else /* ENABLE_QMPI */
/*@
   MPI_Pack_size_c - Returns the upper bound on the amount of space needed to pack a message

Input Parameters:
+ incount - count argument to packing call (non-negative integer) (non-negative integer)
. datatype - datatype argument to packing call (handle) (handle)
- comm - communicator argument to packing call (handle) (handle)

Output Parameters:
. size - upper bound on size of packed message, in bytes (non-negative integer) (non-negative integer)

Notes:
The MPI standard document describes this in terms of 'MPI_Pack', but it
applies to both 'MPI_Pack' and 'MPI_Unpack'.  That is, the value 'size' is
the maximum that is needed by either 'MPI_Pack' or 'MPI_Unpack'.

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_ARG
.N MPI_ERR_COMM
.N MPI_ERR_COUNT
.N MPI_ERR_TYPE
.N MPI_ERR_OTHER

@*/

int MPI_Pack_size_c(MPI_Count incount, MPI_Datatype datatype, MPI_Comm comm, MPI_Count *size)
{
    return internal_Pack_size_c(incount, datatype, comm, size);
}
#endif /* ENABLE_QMPI */
