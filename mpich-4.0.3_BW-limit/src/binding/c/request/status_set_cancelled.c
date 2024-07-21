/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Status_set_cancelled */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Status_set_cancelled = PMPI_Status_set_cancelled
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Status_set_cancelled  MPI_Status_set_cancelled
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Status_set_cancelled as PMPI_Status_set_cancelled
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Status_set_cancelled(MPI_Status *status, int flag)
     __attribute__ ((weak, alias("PMPI_Status_set_cancelled")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Status_set_cancelled
#define MPI_Status_set_cancelled PMPI_Status_set_cancelled
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Status_set_cancelled(MPI_Status *status, int flag)
{
    int mpi_errno = MPI_SUCCESS;

    MPIR_ERRTEST_INITIALIZED_ORDIE();

    MPID_THREAD_CS_ENTER(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    MPIR_FUNC_TERSE_ENTER;

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_ERRTEST_ARGNULL(status, "status", mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    MPIR_STATUS_SET_CANCEL_BIT(*status, flag ? TRUE : FALSE);
    /* ... end of body of routine ... */

  fn_exit:
    MPIR_FUNC_TERSE_EXIT;
    MPID_THREAD_CS_EXIT(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    return mpi_errno;

  fn_fail:
    /* --BEGIN ERROR HANDLINE-- */
#ifdef HAVE_ERROR_CHECKING
    mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE, __func__, __LINE__, MPI_ERR_OTHER,
                                     "**mpi_status_set_cancelled", "**mpi_status_set_cancelled %p %d",
                                     status, flag);
#endif
    mpi_errno = MPIR_Err_return_comm(0, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Status_set_cancelled(QMPI_Context context, int tool_id, MPI_Status *status, int flag)
{
    return internal_Status_set_cancelled(status, flag);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Status_set_cancelled(MPI_Status *status, int flag)
{
    QMPI_Context context;
    QMPI_Status_set_cancelled_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Status_set_cancelled(context, 0, status, flag);

    fn_ptr = (QMPI_Status_set_cancelled_t *) MPIR_QMPI_first_fn_ptrs[MPI_STATUS_SET_CANCELLED_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_STATUS_SET_CANCELLED_T], status, flag);
}
#else /* ENABLE_QMPI */
/*@
   MPI_Status_set_cancelled - Sets the cancelled state associated with a request

Input Parameters:
. flag - if true, indicates request was cancelled (logical)

Input/Output Parameters:
. status - status with which to associate cancel flag (Status)

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_ARG
.N MPI_ERR_OTHER

@*/

int MPI_Status_set_cancelled(MPI_Status *status, int flag)
{
    return internal_Status_set_cancelled(status, flag);
}
#endif /* ENABLE_QMPI */
