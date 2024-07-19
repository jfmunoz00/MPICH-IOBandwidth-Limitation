/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Type_hindexed */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Type_hindexed = PMPI_Type_hindexed
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Type_hindexed  MPI_Type_hindexed
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Type_hindexed as PMPI_Type_hindexed
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Type_hindexed(int count, int array_of_blocklengths[], MPI_Aint array_of_displacements[],
                      MPI_Datatype oldtype, MPI_Datatype *newtype)
                       __attribute__ ((weak, alias("PMPI_Type_hindexed")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Type_hindexed
#define MPI_Type_hindexed PMPI_Type_hindexed
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Type_hindexed(int count, int array_of_blocklengths[],
                                  MPI_Aint array_of_displacements[], MPI_Datatype oldtype,
                                  MPI_Datatype *newtype)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_FUNC_TERSE_ENTER;

    mpi_errno = PMPI_Type_create_hindexed(count, array_of_blocklengths, array_of_displacements, oldtype, newtype);

    MPIR_FUNC_TERSE_EXIT;
    return mpi_errno;
}

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Type_hindexed(QMPI_Context context, int tool_id, int count, int array_of_blocklengths[],
                       MPI_Aint array_of_displacements[], MPI_Datatype oldtype,
                       MPI_Datatype *newtype)
{
    return internal_Type_hindexed(count, array_of_blocklengths, array_of_displacements, oldtype, newtype);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Type_hindexed(int count, int array_of_blocklengths[], MPI_Aint array_of_displacements[],
                      MPI_Datatype oldtype, MPI_Datatype *newtype)
{
    QMPI_Context context;
    QMPI_Type_hindexed_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Type_hindexed(context, 0, count, array_of_blocklengths, array_of_displacements,
                                  oldtype, newtype);

    fn_ptr = (QMPI_Type_hindexed_t *) MPIR_QMPI_first_fn_ptrs[MPI_TYPE_HINDEXED_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_TYPE_HINDEXED_T], count,
            array_of_blocklengths, array_of_displacements, oldtype, newtype);
}
#else /* ENABLE_QMPI */
/*@
   MPI_Type_hindexed - Creates an indexed datatype with offsets in bytes

Input Parameters:
+ count - number of blocks -- also number of entries in array_of_displacements and array_of_blocklengths (non-negative integer)
. array_of_blocklengths - number of elements in each block (non-negative integer)
. array_of_displacements - byte displacement of each block (integer)
- oldtype - old datatype (handle)

Output Parameters:
. newtype - new datatype (handle)

.N Removed
   The replacement for this routine is 'MPI_Type_create_hindexed'.

.N ThreadSafe

.N Fortran
The array_of_displacements are displacements, and are based on a zero origin.  A common error
is to do something like to following
.vb
    integer a(100)
    integer array_of_blocklengths(10), array_of_displacements(10)
    do i=1,10
         array_of_blocklengths(i)   = 1
10       array_of_displacements(i) = (1 + (i-1)*10) * sizeofint
    call MPI_TYPE_HINDEXED(10,array_of_blocklengths,array_of_displacements,MPI_INTEGER,newtype,ierr)
    call MPI_TYPE_COMMIT(newtype,ierr)
    call MPI_SEND(a,1,newtype,...)
.ve
expecting this to send "a(1),a(11),..." because the array_of_displacements have values
"1,11,...".   Because these are `displacements` from the beginning of "a",
it actually sends "a(1+1),a(1+11),...".

If you wish to consider the displacements as array_of_displacements into a Fortran array,
consider declaring the Fortran array with a zero origin
.vb
    integer a(0:99)
.ve

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_OTHER

@*/

int MPI_Type_hindexed(int count, int array_of_blocklengths[], MPI_Aint array_of_displacements[],
                      MPI_Datatype oldtype, MPI_Datatype *newtype)
{
    return internal_Type_hindexed(count, array_of_blocklengths, array_of_displacements, oldtype, newtype);
}
#endif /* ENABLE_QMPI */
