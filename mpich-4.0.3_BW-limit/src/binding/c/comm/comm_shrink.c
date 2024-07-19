/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPIX_Comm_shrink */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPIX_Comm_shrink = PMPIX_Comm_shrink
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPIX_Comm_shrink  MPIX_Comm_shrink
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPIX_Comm_shrink as PMPIX_Comm_shrink
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPIX_Comm_shrink(MPI_Comm comm, MPI_Comm *newcomm)
     __attribute__ ((weak, alias("PMPIX_Comm_shrink")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPIX_Comm_shrink
#define MPIX_Comm_shrink PMPIX_Comm_shrink
#endif /* MPICH_MPI_FROM_PMPI */

static int internalX_Comm_shrink(MPI_Comm comm, MPI_Comm *newcomm)
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
            MPIR_Comm_valid_ptr(comm_ptr, mpi_errno, TRUE);
            if (mpi_errno) {
                goto fn_fail;
            }
            MPIR_ERRTEST_ARGNULL(newcomm, "newcomm", mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    MPIR_Comm *newcomm_ptr ATTRIBUTE((unused)) = NULL;
    *newcomm = MPI_COMM_NULL;
    mpi_errno = MPIR_Comm_shrink_impl(comm_ptr, &newcomm_ptr);
    if (mpi_errno) {
        goto fn_fail;
    }
    if (newcomm_ptr) {
        MPIR_OBJ_PUBLISH_HANDLE(*newcomm, newcomm_ptr->handle);
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
                                     "**mpix_comm_shrink", "**mpix_comm_shrink %C %p", comm, newcomm);
#endif
    mpi_errno = MPIR_Err_return_comm(comm_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPIX_Comm_shrink(QMPI_Context context, int tool_id, MPI_Comm comm, MPI_Comm *newcomm)
{
    return internalX_Comm_shrink(comm, newcomm);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPIX_Comm_shrink(MPI_Comm comm, MPI_Comm *newcomm)
{
    QMPI_Context context;
    QMPIX_Comm_shrink_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPIX_Comm_shrink(context, 0, comm, newcomm);

    fn_ptr = (QMPIX_Comm_shrink_t *) MPIR_QMPI_first_fn_ptrs[MPIX_COMM_SHRINK_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPIX_COMM_SHRINK_T], comm, newcomm);
}
#else /* ENABLE_QMPI */
/*@
   MPIX_Comm_shrink - Creates a new communitor from an existing communicator while excluding failed processes

Input Parameters:
. comm - communicator (handle)

Output Parameters:
. newcomm - new communicator (handle)

Notes:
This collective operation creates a new intra- or intercommunicator newcomm from the intra- or intercommunicator comm, respectively, by excluding the group of failed MPI processes as agreed upon during the operation. The groups of newcomm must include everyMPIprocess that returns from MPIX_Comm_shrink, and it must exclude every MPI process whose failure caused an operation on comm to raise an MPI error of class MPI_ERR_PROC_FAILED or MPI_ERR_PROC_FAILED_PENDING at a member of the groups of newcomm, before that member initiated MPIX_Comm_shrink. This call is semantically equivalent to an MPI_Comm_split operation that would succeed despite failures, where members of the groups of newcomm participate with the same color and a key equal to their rank incomm.

This function never raises an error of class MPI_ERR_PROC_FAILED or MPI_ERR_REVOKED. The defined semantics of MPIX_Comm_shrink are maintained when comm is revoked, or when the group of comm contains failed MPI processes

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_ARG
.N MPI_ERR_COMM
.N MPI_ERR_OTHER

@*/

int MPIX_Comm_shrink(MPI_Comm comm, MPI_Comm *newcomm)
{
    return internalX_Comm_shrink(comm, newcomm);
}
#endif /* ENABLE_QMPI */
