/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Waitsome */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Waitsome = PMPI_Waitsome
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Waitsome  MPI_Waitsome
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Waitsome as PMPI_Waitsome
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Waitsome(int incount, MPI_Request array_of_requests[], int *outcount,
                 int array_of_indices[], MPI_Status array_of_statuses[])
                  __attribute__ ((weak, alias("PMPI_Waitsome")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Waitsome
#define MPI_Waitsome PMPI_Waitsome
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Waitsome(int incount, MPI_Request array_of_requests[], int *outcount,
                             int array_of_indices[], MPI_Status array_of_statuses[])
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Request *request_ptr_array[MPIR_REQUEST_PTR_ARRAY_SIZE];
    MPIR_Request **request_ptrs = request_ptr_array;

    MPIR_ERRTEST_INITIALIZED_ORDIE();

    MPID_THREAD_CS_ENTER(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    MPIR_FUNC_TERSE_ENTER;

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            if (incount > 0) {
                MPIR_ERRTEST_ARGNULL(array_of_requests, "array_of_requests", mpi_errno);
                for (int i = 0; i < incount; i++) {
                    MPIR_ERRTEST_ARRAYREQUEST_OR_NULL(array_of_requests[i], i, mpi_errno);
                }
            }
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    if (incount > MPIR_REQUEST_PTR_ARRAY_SIZE) {
        int nbytes = incount * sizeof(MPIR_Request *);
        request_ptrs = (MPIR_Request **) MPL_malloc(nbytes, MPL_MEM_OBJECT);
        if (request_ptrs == NULL) {
            MPIR_CHKMEM_SETERR(mpi_errno, nbytes, "request pointers");
            goto fn_fail;
        }
    }

    for (int i = 0; i < incount; i++) {
        MPIR_Request_get_ptr(array_of_requests[i], request_ptrs[i]);
    }

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            for (int i = 0; i < incount; i++) {
                if (array_of_requests[i] != MPI_REQUEST_NULL) {
                    MPIR_Request_valid_ptr(request_ptrs[i], mpi_errno);
                    if (mpi_errno) {
                        goto fn_fail;
                    }
                }
            }
            MPIR_ERRTEST_COUNT(incount, mpi_errno);
            MPIR_ERRTEST_ARGNULL(outcount, "outcount", mpi_errno);
            if (incount > 0) {
                MPIR_ERRTEST_ARGNULL(array_of_indices, "array_of_indices", mpi_errno);
                MPIR_ERRTEST_ARGNULL(array_of_statuses, "array_of_statuses", mpi_errno);
            }
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    /* Pass down request ptr to avoid redundant handle to ptr translation. */
    mpi_errno = MPIR_Waitsome(incount, array_of_requests, request_ptrs, outcount,
                              array_of_indices, array_of_statuses);
    if (mpi_errno)
        goto fn_fail;
    /* ... end of body of routine ... */

  fn_exit:
    if (incount > MPIR_REQUEST_PTR_ARRAY_SIZE) {
        MPL_free(request_ptrs);
    }
    MPIR_FUNC_TERSE_EXIT;
    MPID_THREAD_CS_EXIT(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    return mpi_errno;

  fn_fail:
    /* --BEGIN ERROR HANDLINE-- */
#ifdef HAVE_ERROR_CHECKING
    mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE, __func__, __LINE__, MPI_ERR_OTHER,
                                     "**mpi_waitsome", "**mpi_waitsome %d %p %p %p %p", incount,
                                     array_of_requests, outcount, array_of_indices, array_of_statuses);
#endif
    mpi_errno = MPIR_Err_return_comm(0, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Waitsome(QMPI_Context context, int tool_id, int incount, MPI_Request array_of_requests[],
                  int *outcount, int array_of_indices[], MPI_Status array_of_statuses[])
{
    return internal_Waitsome(incount, array_of_requests, outcount, array_of_indices, array_of_statuses);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Waitsome(int incount, MPI_Request array_of_requests[], int *outcount,
                 int array_of_indices[], MPI_Status array_of_statuses[])
{
    QMPI_Context context;
    QMPI_Waitsome_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Waitsome(context, 0, incount, array_of_requests, outcount, array_of_indices,
                             array_of_statuses);

    fn_ptr = (QMPI_Waitsome_t *) MPIR_QMPI_first_fn_ptrs[MPI_WAITSOME_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_WAITSOME_T], incount, array_of_requests,
            outcount, array_of_indices, array_of_statuses);
}
#else /* ENABLE_QMPI */
/*@
   MPI_Waitsome - Waits for some given MPI Requests to complete

Input Parameters:
. incount - length of array_of_requests (non-negative integer)

Input/Output Parameters:
. array_of_requests - array of requests (handle)

Output Parameters:
+ outcount - number of completed requests (integer)
. array_of_indices - array of indices of operations that completed (integer)
- array_of_statuses - array of status objects for operations that completed (Status)

Notes:
The array of indices are in the range '0' to 'incount - 1' for C and
in the range '1' to 'incount' for Fortran.

Null requests are ignored; if all requests are null, then the routine
returns with 'outcount' set to 'MPI_UNDEFINED'.

While it is possible to list a request handle more than once in the
array_of_requests, such an action is considered erroneous and may cause the
program to unexecpectedly terminate or produce incorrect results.

'MPI_Waitsome' provides an interface much like the Unix 'select' or 'poll'
calls and, in a high qualilty implementation, indicates all of the requests
that have completed when 'MPI_Waitsome' is called.
However, 'MPI_Waitsome' only guarantees that at least one
request has completed; there is no guarantee that `all` completed requests
will be returned, or that the entries in 'array_of_indices' will be in
increasing order. Also, requests that are completed while 'MPI_Waitsome' is
executing may or may not be returned, depending on the timing of the
completion of the message.

.N waitstatus

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_ARG
.N MPI_ERR_COUNT
.N MPI_ERR_REQUEST
.N MPI_ERR_OTHER

@*/

int MPI_Waitsome(int incount, MPI_Request array_of_requests[], int *outcount,
                 int array_of_indices[], MPI_Status array_of_statuses[])
{
    return internal_Waitsome(incount, array_of_requests, outcount, array_of_indices, array_of_statuses);
}
#endif /* ENABLE_QMPI */
