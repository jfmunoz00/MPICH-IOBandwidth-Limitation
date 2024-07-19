/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_T_cvar_get_index */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_T_cvar_get_index = PMPI_T_cvar_get_index
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_T_cvar_get_index  MPI_T_cvar_get_index
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_T_cvar_get_index as PMPI_T_cvar_get_index
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_T_cvar_get_index(const char *name, int *cvar_index)
     __attribute__ ((weak, alias("PMPI_T_cvar_get_index")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_T_cvar_get_index
#define MPI_T_cvar_get_index PMPI_T_cvar_get_index
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_T_cvar_get_index(const char *name, int *cvar_index)
{
    int mpi_errno = MPI_SUCCESS;

    MPIT_ERRTEST_MPIT_INITIALIZED();

    MPIR_T_THREAD_CS_ENTER();
    MPIR_FUNC_TERSE_ENTER;

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIT_ERRTEST_ARGNULL(name);
            MPIT_ERRTEST_ARGNULL(cvar_index);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    name2index_hash_t *hash_entry;

    /* Do hash lookup by the name */
    HASH_FIND_STR(cvar_hash, name, hash_entry);
    if (hash_entry != NULL) {
        *cvar_index = hash_entry->idx;
    } else {
        mpi_errno = MPI_T_ERR_INVALID_NAME;
        goto fn_fail;
    }
    /* ... end of body of routine ... */

  fn_exit:
    MPIR_FUNC_TERSE_EXIT;
    MPIR_T_THREAD_CS_EXIT();
    return mpi_errno;

  fn_fail:
    goto fn_exit;
}

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_T_cvar_get_index(QMPI_Context context, int tool_id, const char *name, int *cvar_index)
{
    return internal_T_cvar_get_index(name, cvar_index);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_T_cvar_get_index(const char *name, int *cvar_index)
{
    QMPI_Context context;
    QMPI_T_cvar_get_index_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_T_cvar_get_index(context, 0, name, cvar_index);

    fn_ptr = (QMPI_T_cvar_get_index_t *) MPIR_QMPI_first_fn_ptrs[MPI_T_CVAR_GET_INDEX_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_T_CVAR_GET_INDEX_T], name, cvar_index);
}
#else /* ENABLE_QMPI */
/*@
   MPI_T_cvar_get_index - Get the index of a control variable

Input Parameters:
. name - name of the control variable (string)

Output Parameters:
. cvar_index - index of the control variable (integer)

.N ThreadSafe

.N Errors
.N MPI_SUCCESS

.N MPI_T_ERR_INVALID
.N MPI_T_ERR_INVALID_NAME
.N MPI_T_ERR_NOT_INITIALIZED
.N MPI_ERR_OTHER

@*/

int MPI_T_cvar_get_index(const char *name, int *cvar_index)
{
    return internal_T_cvar_get_index(name, cvar_index);
}
#endif /* ENABLE_QMPI */
