/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Buffer_detach */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Buffer_detach = PMPI_Buffer_detach
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Buffer_detach  MPI_Buffer_detach
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Buffer_detach as PMPI_Buffer_detach
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Buffer_detach(void *buffer_addr, int *size)
     __attribute__ ((weak, alias("PMPI_Buffer_detach")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Buffer_detach
#define MPI_Buffer_detach PMPI_Buffer_detach
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Buffer_detach(void *buffer_addr, int *size)
{
    int mpi_errno = MPI_SUCCESS;

    MPIR_ERRTEST_INITIALIZED_ORDIE();

    MPID_THREAD_CS_ENTER(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    MPIR_FUNC_TERSE_ENTER;

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_ERRTEST_ARGNULL(buffer_addr, "buffer_addr", mpi_errno);
            MPIR_ERRTEST_ARGNULL(size, "size", mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    MPI_Aint size_c;
    mpi_errno = MPIR_Buffer_detach_impl(buffer_addr, &size_c);
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
                                     "**mpi_buffer_detach", "**mpi_buffer_detach %p %p", buffer_addr,
                                     size);
#endif
    mpi_errno = MPIR_Err_return_comm(0, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Buffer_detach(QMPI_Context context, int tool_id, void *buffer_addr, int *size)
{
    return internal_Buffer_detach(buffer_addr, size);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Buffer_detach(void *buffer_addr, int *size)
{
    QMPI_Context context;
    QMPI_Buffer_detach_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Buffer_detach(context, 0, buffer_addr, size);

    fn_ptr = (QMPI_Buffer_detach_t *) MPIR_QMPI_first_fn_ptrs[MPI_BUFFER_DETACH_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_BUFFER_DETACH_T], buffer_addr, size);
}
#else /* ENABLE_QMPI */
/*@
   MPI_Buffer_detach - Removes an existing buffer (for use in MPI_Bsend etc)

Output Parameters:
+ buffer_addr - initial buffer address (choice)
- size - buffer size, in bytes (integer)

Notes:
    The reason that 'MPI_Buffer_detach' returns the address and size of the
buffer being detached is to allow nested libraries to replace and restore
the buffer.  For example, consider

.vb
    int size, mysize, idummy;
    void *ptr, *myptr, *dummy;
    MPI_Buffer_detach(&ptr, &size);
    MPI_Buffer_attach(myptr, mysize);
    ...
    ... library code ...
    ...
    MPI_Buffer_detach(&dummy, &idummy);
    MPI_Buffer_attach(ptr, size);
.ve

This is much like the action of the Unix signal routine and has the same
strengths (it is simple) and weaknesses (it only works for nested usages).

Note that for this approach to work, MPI_Buffer_detach must return MPI_SUCCESS
even when there is no buffer to detach.  In that case, it returns a size of
zero.  The MPI 1.1 standard for 'MPI_BUFFER_DETACH' contains the text

.vb
   The statements made in this section describe the behavior of MPI for
   buffered-mode sends. When no buffer is currently associated, MPI behaves
   as if a zero-sized buffer is associated with the process.
.ve

This could be read as applying only to the various Bsend routines.  This
implementation takes the position that this applies to 'MPI_BUFFER_DETACH'
as well.

.N NotThreadSafe
Because the buffer for buffered sends (e.g., 'MPI_Bsend') is shared by all
threads in a process, the user is responsible for ensuring that only
one thread at a time calls this routine or 'MPI_Buffer_attach'.

.N Fortran

    The Fortran binding for this routine is different.  Because Fortran
    does not have pointers, it is impossible to provide a way to use the
    output of this routine to exchange buffers.  In this case, only the
    size field is set.

Notes for C:
    Even though the 'bufferptr' argument is declared as 'void *', it is
    really the address of a void pointer.  See the rationale in the
    standard for more details.

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_ARG
.N MPI_ERR_OTHER

.seealso: MPI_Buffer_attach
@*/

int MPI_Buffer_detach(void *buffer_addr, int *size)
{
    return internal_Buffer_detach(buffer_addr, size);
}
#endif /* ENABLE_QMPI */

/* -- Begin Profiling Symbol Block for routine MPI_Buffer_detach_c */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Buffer_detach_c = PMPI_Buffer_detach_c
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Buffer_detach_c  MPI_Buffer_detach_c
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Buffer_detach_c as PMPI_Buffer_detach_c
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Buffer_detach_c(void *buffer_addr, MPI_Count *size)
     __attribute__ ((weak, alias("PMPI_Buffer_detach_c")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Buffer_detach_c
#define MPI_Buffer_detach_c PMPI_Buffer_detach_c
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Buffer_detach_c(void *buffer_addr, MPI_Count *size)
{
    int mpi_errno = MPI_SUCCESS;

    MPIR_ERRTEST_INITIALIZED_ORDIE();

    MPID_THREAD_CS_ENTER(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    MPIR_FUNC_TERSE_ENTER;

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_ERRTEST_ARGNULL(buffer_addr, "buffer_addr", mpi_errno);
            MPIR_ERRTEST_ARGNULL(size, "size", mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    if (sizeof(MPI_Count) == sizeof(MPI_Aint)) {
        mpi_errno = MPIR_Buffer_detach_impl(buffer_addr, (MPI_Aint *) size);
        if (mpi_errno) {
            goto fn_fail;
        }
    } else {
        /* MPI_Count is bigger than MPI_Aint */
        MPI_Aint size_c;
        mpi_errno = MPIR_Buffer_detach_impl(buffer_addr, &size_c);
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
                                     "**mpi_buffer_detach_c", "**mpi_buffer_detach_c %p %p",
                                     buffer_addr, size);
#endif
    mpi_errno = MPIR_Err_return_comm(0, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Buffer_detach_c(QMPI_Context context, int tool_id, void *buffer_addr, MPI_Count *size)
{
    return internal_Buffer_detach_c(buffer_addr, size);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Buffer_detach_c(void *buffer_addr, MPI_Count *size)
{
    QMPI_Context context;
    QMPI_Buffer_detach_c_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Buffer_detach_c(context, 0, buffer_addr, size);

    fn_ptr = (QMPI_Buffer_detach_c_t *) MPIR_QMPI_first_fn_ptrs[MPI_BUFFER_DETACH_C_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_BUFFER_DETACH_C_T], buffer_addr, size);
}
#else /* ENABLE_QMPI */
/*@
   MPI_Buffer_detach_c - Removes an existing buffer (for use in MPI_Bsend etc)

Output Parameters:
+ buffer_addr - initial buffer address (choice) (choice)
- size - buffer size, in bytes (integer) (integer)

Notes:
    The reason that 'MPI_Buffer_detach' returns the address and size of the
buffer being detached is to allow nested libraries to replace and restore
the buffer.  For example, consider

.vb
    int size, mysize, idummy;
    void *ptr, *myptr, *dummy;
    MPI_Buffer_detach(&ptr, &size);
    MPI_Buffer_attach(myptr, mysize);
    ...
    ... library code ...
    ...
    MPI_Buffer_detach(&dummy, &idummy);
    MPI_Buffer_attach(ptr, size);
.ve

This is much like the action of the Unix signal routine and has the same
strengths (it is simple) and weaknesses (it only works for nested usages).

Note that for this approach to work, MPI_Buffer_detach must return MPI_SUCCESS
even when there is no buffer to detach.  In that case, it returns a size of
zero.  The MPI 1.1 standard for 'MPI_BUFFER_DETACH' contains the text

.vb
   The statements made in this section describe the behavior of MPI for
   buffered-mode sends. When no buffer is currently associated, MPI behaves
   as if a zero-sized buffer is associated with the process.
.ve

This could be read as applying only to the various Bsend routines.  This
implementation takes the position that this applies to 'MPI_BUFFER_DETACH'
as well.

.N NotThreadSafe
Because the buffer for buffered sends (e.g., 'MPI_Bsend') is shared by all
threads in a process, the user is responsible for ensuring that only
one thread at a time calls this routine or 'MPI_Buffer_attach'.

.N Fortran

    The Fortran binding for this routine is different.  Because Fortran
    does not have pointers, it is impossible to provide a way to use the
    output of this routine to exchange buffers.  In this case, only the
    size field is set.

Notes for C:
    Even though the 'bufferptr' argument is declared as 'void *', it is
    really the address of a void pointer.  See the rationale in the
    standard for more details.

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_ARG
.N MPI_ERR_OTHER

.seealso: MPI_Buffer_attach
@*/

int MPI_Buffer_detach_c(void *buffer_addr, MPI_Count *size)
{
    return internal_Buffer_detach_c(buffer_addr, size);
}
#endif /* ENABLE_QMPI */
