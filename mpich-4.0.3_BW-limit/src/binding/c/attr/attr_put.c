/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Attr_put */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Attr_put = PMPI_Attr_put
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Attr_put  MPI_Attr_put
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Attr_put as PMPI_Attr_put
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Attr_put(MPI_Comm comm, int keyval, void *attribute_val)
     __attribute__ ((weak, alias("PMPI_Attr_put")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Attr_put
#define MPI_Attr_put PMPI_Attr_put
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Attr_put(MPI_Comm comm, int keyval, void *attribute_val)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_FUNC_TERSE_ENTER;

    mpi_errno = PMPI_Comm_set_attr(comm, keyval, attribute_val);

    MPIR_FUNC_TERSE_EXIT;
    return mpi_errno;
}

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Attr_put(QMPI_Context context, int tool_id, MPI_Comm comm, int keyval,
                  void *attribute_val)
{
    return internal_Attr_put(comm, keyval, attribute_val);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Attr_put(MPI_Comm comm, int keyval, void *attribute_val)
{
    QMPI_Context context;
    QMPI_Attr_put_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Attr_put(context, 0, comm, keyval, attribute_val);

    fn_ptr = (QMPI_Attr_put_t *) MPIR_QMPI_first_fn_ptrs[MPI_ATTR_PUT_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_ATTR_PUT_T], comm, keyval,
            attribute_val);
}
#else /* ENABLE_QMPI */
/*@
   MPI_Attr_put - Stores attribute value associated with a key

Input Parameters:
+ comm - communicator to which attribute will be attached (handle)
. keyval - key value, as returned by MPI_KEYVAL_CREATE (integer)
- attribute_val - attribute value (None)

.N Deprecated
   The replacement for this routine is 'MPI_Comm_set_attr'.

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_OTHER

.seealso: MPI_Attr_get, MPI_Keyval_create, MPI_Attr_delete, MPI_Comm_set_attr
@*/

int MPI_Attr_put(MPI_Comm comm, int keyval, void *attribute_val)
{
    return internal_Attr_put(comm, keyval, attribute_val);
}
#endif /* ENABLE_QMPI */
