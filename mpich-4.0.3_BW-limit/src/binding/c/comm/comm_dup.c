/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Comm_dup */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Comm_dup = PMPI_Comm_dup
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Comm_dup  MPI_Comm_dup
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Comm_dup as PMPI_Comm_dup
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Comm_dup(MPI_Comm comm, MPI_Comm *newcomm)  __attribute__ ((weak, alias("PMPI_Comm_dup")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Comm_dup
#define MPI_Comm_dup PMPI_Comm_dup
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Comm_dup(MPI_Comm comm, MPI_Comm *newcomm)
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
            MPIR_ERRTEST_ARGNULL(newcomm, "newcomm", mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    MPIR_Comm *newcomm_ptr ATTRIBUTE((unused)) = NULL;
    *newcomm = MPI_COMM_NULL;
    mpi_errno = MPIR_Comm_dup_impl(comm_ptr, &newcomm_ptr);
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
                                     "**mpi_comm_dup", "**mpi_comm_dup %C %p", comm, newcomm);
#endif
    mpi_errno = MPIR_Err_return_comm(comm_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Comm_dup(QMPI_Context context, int tool_id, MPI_Comm comm, MPI_Comm *newcomm)
{
    return internal_Comm_dup(comm, newcomm);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Comm_dup(MPI_Comm comm, MPI_Comm *newcomm)
{
    QMPI_Context context;
    QMPI_Comm_dup_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Comm_dup(context, 0, comm, newcomm);

    fn_ptr = (QMPI_Comm_dup_t *) MPIR_QMPI_first_fn_ptrs[MPI_COMM_DUP_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_COMM_DUP_T], comm, newcomm);
}
#else /* ENABLE_QMPI */
/*@
   MPI_Comm_dup - Duplicates an existing communicator

Input Parameters:
. comm - communicator (handle)

Output Parameters:
. newcomm - copy of comm (handle)

Notes:
  This routine is used to create a new communicator that has a new
  communication context but contains the same group of processes as
  the input communicator.  Since all MPI communication is performed
  within a communicator (specifies as the group of processes `plus`
  the context), this routine provides an effective way to create a
  private communicator for use by a software module or library.  In
  particular, no library routine should use 'MPI_COMM_WORLD' as the
  communicator; instead, a duplicate of a user-specified communicator
  should always be used.  For more information, see Using MPI, 2nd
  edition.

  Because this routine essentially produces a copy of a communicator,
  it also copies any attributes that have been defined on the input
  communicator, using the attribute copy function specified by the
  'copy_function' argument to 'MPI_Keyval_create'.  This is
  particularly useful for (a) attributes that describe some property
  of the group associated with the communicator, such as its
  interconnection topology and (b) communicators that are given back
  to the user; the attributes in this case can track subsequent
  'MPI_Comm_dup' operations on this communicator.

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_ARG
.N MPI_ERR_COMM
.N MPI_ERR_OTHER

.seealso: MPI_Comm_free, MPI_Keyval_create, MPI_Attr_put, MPI_Attr_delete, MPI_Comm_create_keyval, MPI_Comm_set_attr, MPI_Comm_delete_attr
@*/

int MPI_Comm_dup(MPI_Comm comm, MPI_Comm *newcomm)
{
    return internal_Comm_dup(comm, newcomm);
}
#endif /* ENABLE_QMPI */
