/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_File_create_errhandler */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_File_create_errhandler = PMPI_File_create_errhandler
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_File_create_errhandler  MPI_File_create_errhandler
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_File_create_errhandler as PMPI_File_create_errhandler
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_File_create_errhandler(MPI_File_errhandler_function *file_errhandler_fn,
                               MPI_Errhandler *errhandler)
                                __attribute__ ((weak, alias("PMPI_File_create_errhandler")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_File_create_errhandler
#define MPI_File_create_errhandler PMPI_File_create_errhandler
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_File_create_errhandler(MPI_File_errhandler_function *file_errhandler_fn,
                                           MPI_Errhandler *errhandler)
{
    int mpi_errno = MPI_SUCCESS;

    MPIR_ERRTEST_INITIALIZED_ORDIE();

    MPID_THREAD_CS_ENTER(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    MPIR_FUNC_TERSE_ENTER;

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_ERRTEST_ARGNULL(file_errhandler_fn, "file_errhandler_fn", mpi_errno);
            MPIR_ERRTEST_ARGNULL(errhandler, "errhandler", mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    MPIR_Errhandler *errhandler_ptr ATTRIBUTE((unused)) = NULL;
    *errhandler = MPI_ERRHANDLER_NULL;
    mpi_errno = MPIR_File_create_errhandler_impl(file_errhandler_fn, &errhandler_ptr);
    if (mpi_errno) {
        goto fn_fail;
    }
    if (errhandler_ptr) {
        MPIR_OBJ_PUBLISH_HANDLE(*errhandler, errhandler_ptr->handle);
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
                                     "**mpi_file_create_errhandler",
                                     "**mpi_file_create_errhandler %p %p", file_errhandler_fn,
                                     errhandler);
#endif
    mpi_errno = MPIR_Err_return_comm(0, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_File_create_errhandler(QMPI_Context context, int tool_id,
                                MPI_File_errhandler_function *file_errhandler_fn,
                                MPI_Errhandler *errhandler)
{
    return internal_File_create_errhandler(file_errhandler_fn, errhandler);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_File_create_errhandler(MPI_File_errhandler_function *file_errhandler_fn,
                               MPI_Errhandler *errhandler)
{
    QMPI_Context context;
    QMPI_File_create_errhandler_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_File_create_errhandler(context, 0, file_errhandler_fn, errhandler);

    fn_ptr = (QMPI_File_create_errhandler_t *) MPIR_QMPI_first_fn_ptrs[MPI_FILE_CREATE_ERRHANDLER_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_FILE_CREATE_ERRHANDLER_T],
            file_errhandler_fn, errhandler);
}
#else /* ENABLE_QMPI */
/*@
   MPI_File_create_errhandler - Create a file error handler

Input Parameters:
. file_errhandler_fn - user defined error handling procedure (function)

Output Parameters:
. errhandler - MPI error handler (handle)

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_ARG
.N MPI_ERR_OTHER

@*/

int MPI_File_create_errhandler(MPI_File_errhandler_function *file_errhandler_fn,
                               MPI_Errhandler *errhandler)
{
    return internal_File_create_errhandler(file_errhandler_fn, errhandler);
}
#endif /* ENABLE_QMPI */
