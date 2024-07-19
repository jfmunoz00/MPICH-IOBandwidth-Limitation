/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Buffer_attach */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Buffer_attach = PMPI_Buffer_attach
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Buffer_attach  MPI_Buffer_attach
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Buffer_attach as PMPI_Buffer_attach
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Buffer_attach(void *buffer, int size)  __attribute__ ((weak, alias("PMPI_Buffer_attach")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Buffer_attach
#define MPI_Buffer_attach PMPI_Buffer_attach
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Buffer_attach(void *buffer, int size)
{
    int mpi_errno = MPI_SUCCESS;

    MPIR_ERRTEST_INITIALIZED_ORDIE();

    MPID_THREAD_CS_ENTER(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    MPIR_FUNC_TERSE_ENTER;

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_ERRTEST_ARGNULL(buffer, "buffer", mpi_errno);
            MPIR_ERRTEST_ARGNEG(size, "size", mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    mpi_errno = MPIR_Bsend_attach(buffer, size);
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
                                     "**mpi_buffer_attach", "**mpi_buffer_attach %p %d", buffer, size);
#endif
    mpi_errno = MPIR_Err_return_comm(0, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Buffer_attach(QMPI_Context context, int tool_id, void *buffer, int size)
{
    return internal_Buffer_attach(buffer, size);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Buffer_attach(void *buffer, int size)
{
    QMPI_Context context;
    QMPI_Buffer_attach_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Buffer_attach(context, 0, buffer, size);

    fn_ptr = (QMPI_Buffer_attach_t *) MPIR_QMPI_first_fn_ptrs[MPI_BUFFER_ATTACH_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_BUFFER_ATTACH_T], buffer, size);
}
#else /* ENABLE_QMPI */
/*@
   MPI_Buffer_attach - Attaches a user-provided buffer for sending

Input Parameters:
+ buffer - initial buffer address (choice)
- size - buffer size, in bytes (non-negative integer)

Notes:
The size given should be the sum of the sizes of all outstanding Bsends that
you intend to have, plus 'MPI_BSEND_OVERHEAD' for each Bsend that you do.
For the purposes of calculating size, you should use 'MPI_Pack_size'.
In other words, in the code
.vb
     MPI_Buffer_attach(buffer, size);
     MPI_Bsend(..., count=20, datatype=type1,  ...);
     ...
     MPI_Bsend(..., count=40, datatype=type2, ...);
.ve
the value of 'size' in the 'MPI_Buffer_attach' call should be greater than
the value computed by
.vb
     MPI_Pack_size(20, type1, comm, &s1);
     MPI_Pack_size(40, type2, comm, &s2);
     size = s1 + s2 + 2 * MPI_BSEND_OVERHEAD;
.ve
The 'MPI_BSEND_OVERHEAD' gives the maximum amount of space that may be used in
the buffer for use by the BSEND routines in using the buffer.  This value
is in 'mpi.h' (for C) and 'mpif.h' (for Fortran).

.N NotThreadSafe
Because the buffer for buffered sends (e.g., 'MPI_Bsend') is shared by all
threads in a process, the user is responsible for ensuring that only
one thread at a time calls this routine or 'MPI_Buffer_detach'.

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_ARG
.N MPI_ERR_OTHER

.seealso: MPI_Buffer_detach, MPI_Bsend
@*/

int MPI_Buffer_attach(void *buffer, int size)
{
    return internal_Buffer_attach(buffer, size);
}
#endif /* ENABLE_QMPI */

/* -- Begin Profiling Symbol Block for routine MPI_Buffer_attach_c */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Buffer_attach_c = PMPI_Buffer_attach_c
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Buffer_attach_c  MPI_Buffer_attach_c
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Buffer_attach_c as PMPI_Buffer_attach_c
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Buffer_attach_c(void *buffer, MPI_Count size)
     __attribute__ ((weak, alias("PMPI_Buffer_attach_c")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Buffer_attach_c
#define MPI_Buffer_attach_c PMPI_Buffer_attach_c
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Buffer_attach_c(void *buffer, MPI_Count size)
{
    int mpi_errno = MPI_SUCCESS;

    MPIR_ERRTEST_INITIALIZED_ORDIE();

    MPID_THREAD_CS_ENTER(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    MPIR_FUNC_TERSE_ENTER;

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_ERRTEST_ARGNULL(buffer, "buffer", mpi_errno);
            MPIR_ERRTEST_ARGNEG(size, "size", mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    if (sizeof(MPI_Count) == sizeof(MPI_Aint)) {
        mpi_errno = MPIR_Bsend_attach(buffer, size);
        if (mpi_errno != MPI_SUCCESS)
            goto fn_fail;
    } else {
        /* MPI_Count is bigger than MPI_Aint */
        if (size > MPIR_AINT_MAX) {
            mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE,
                                             __func__, __LINE__, MPI_ERR_OTHER,
                                             "**too_big_for_input",
                                             "**too_big_for_input %s", "size");
            goto fn_fail;
        }
        mpi_errno = MPIR_Bsend_attach(buffer, size);
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
                                     "**mpi_buffer_attach_c", "**mpi_buffer_attach_c %p %c", buffer,
                                     size);
#endif
    mpi_errno = MPIR_Err_return_comm(0, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Buffer_attach_c(QMPI_Context context, int tool_id, void *buffer, MPI_Count size)
{
    return internal_Buffer_attach_c(buffer, size);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Buffer_attach_c(void *buffer, MPI_Count size)
{
    QMPI_Context context;
    QMPI_Buffer_attach_c_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Buffer_attach_c(context, 0, buffer, size);

    fn_ptr = (QMPI_Buffer_attach_c_t *) MPIR_QMPI_first_fn_ptrs[MPI_BUFFER_ATTACH_C_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_BUFFER_ATTACH_C_T], buffer, size);
}
#else /* ENABLE_QMPI */
/*@
   MPI_Buffer_attach_c - Attaches a user-provided buffer for sending

Input Parameters:
+ buffer - initial buffer address (choice) (choice)
- size - buffer size, in bytes (non-negative integer) (non-negative integer)

Notes:
The size given should be the sum of the sizes of all outstanding Bsends that
you intend to have, plus 'MPI_BSEND_OVERHEAD' for each Bsend that you do.
For the purposes of calculating size, you should use 'MPI_Pack_size'.
In other words, in the code
.vb
     MPI_Buffer_attach(buffer, size);
     MPI_Bsend(..., count=20, datatype=type1,  ...);
     ...
     MPI_Bsend(..., count=40, datatype=type2, ...);
.ve
the value of 'size' in the 'MPI_Buffer_attach' call should be greater than
the value computed by
.vb
     MPI_Pack_size(20, type1, comm, &s1);
     MPI_Pack_size(40, type2, comm, &s2);
     size = s1 + s2 + 2 * MPI_BSEND_OVERHEAD;
.ve
The 'MPI_BSEND_OVERHEAD' gives the maximum amount of space that may be used in
the buffer for use by the BSEND routines in using the buffer.  This value
is in 'mpi.h' (for C) and 'mpif.h' (for Fortran).

.N NotThreadSafe
Because the buffer for buffered sends (e.g., 'MPI_Bsend') is shared by all
threads in a process, the user is responsible for ensuring that only
one thread at a time calls this routine or 'MPI_Buffer_detach'.

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_ARG
.N MPI_ERR_OTHER

.seealso: MPI_Buffer_detach, MPI_Bsend
@*/

int MPI_Buffer_attach_c(void *buffer, MPI_Count size)
{
    return internal_Buffer_attach_c(buffer, size);
}
#endif /* ENABLE_QMPI */
