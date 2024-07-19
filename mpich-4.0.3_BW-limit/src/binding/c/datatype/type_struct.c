/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Type_struct */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Type_struct = PMPI_Type_struct
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Type_struct  MPI_Type_struct
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Type_struct as PMPI_Type_struct
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Type_struct(int count, int array_of_blocklengths[], MPI_Aint array_of_displacements[],
                    MPI_Datatype array_of_types[], MPI_Datatype *newtype)
                     __attribute__ ((weak, alias("PMPI_Type_struct")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Type_struct
#define MPI_Type_struct PMPI_Type_struct
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Type_struct(int count, int array_of_blocklengths[],
                                MPI_Aint array_of_displacements[], MPI_Datatype array_of_types[],
                                MPI_Datatype *newtype)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_FUNC_TERSE_ENTER;

    mpi_errno = PMPI_Type_create_struct(count, array_of_blocklengths, array_of_displacements, array_of_types, newtype);

    MPIR_FUNC_TERSE_EXIT;
    return mpi_errno;
}

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Type_struct(QMPI_Context context, int tool_id, int count, int array_of_blocklengths[],
                     MPI_Aint array_of_displacements[], MPI_Datatype array_of_types[],
                     MPI_Datatype *newtype)
{
    return internal_Type_struct(count, array_of_blocklengths, array_of_displacements, array_of_types, newtype);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Type_struct(int count, int array_of_blocklengths[], MPI_Aint array_of_displacements[],
                    MPI_Datatype array_of_types[], MPI_Datatype *newtype)
{
    QMPI_Context context;
    QMPI_Type_struct_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Type_struct(context, 0, count, array_of_blocklengths, array_of_displacements,
                                array_of_types, newtype);

    fn_ptr = (QMPI_Type_struct_t *) MPIR_QMPI_first_fn_ptrs[MPI_TYPE_STRUCT_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_TYPE_STRUCT_T], count,
            array_of_blocklengths, array_of_displacements, array_of_types, newtype);
}
#else /* ENABLE_QMPI */
/*@
   MPI_Type_struct - Creates a struct datatype

Input Parameters:
+ count - number of blocks also number of entries in arrays array_of_types, array_of_displacements, and array_of_blocklengths (non-negative integer)
. array_of_blocklengths - number of elements in each block (non-negative integer)
. array_of_displacements - byte displacement of each block (integer)
- array_of_types - types of elements in each block (handle)

Output Parameters:
. newtype - new datatype (handle)

Notes:
If an upperbound is set explicitly by using the MPI datatype 'MPI_UB', the
corresponding index must be positive.

The MPI standard originally made vague statements about padding and alignment;
this was intended to allow the simple definition of structures that could
be sent with a count greater than one.  For example,
.vb
    struct { int a; char b; } foo;
.ve
may have 'sizeof(foo) > sizeof(int) + sizeof(char)'; for example,
'sizeof(foo) == 2*sizeof(int)'.  The initial version of the MPI standard
defined the extent of a datatype as including an `epsilon` that would have
allowed an implementation to make the extent an MPI datatype
for this structure equal to '2*sizeof(int)'.
However, since different systems might define different paddings, there was
much discussion by the MPI Forum about what was the correct value of
epsilon, and one suggestion was to define epsilon as zero.
This would have been the best thing to do in MPI 1.0, particularly since
the 'MPI_UB' type allows the user to easily set the end of the structure.
Unfortunately, this change did not make it into the final document.
Currently, this routine does not add any padding, since the amount of
padding needed is determined by the compiler that the user is using to
build their code, not the compiler used to construct the MPI library.
A later version of MPICH may provide for some natural choices of padding
(e.g., multiple of the size of the largest basic member), but users are
advised to never depend on this, even with vendor MPI implementations.
Instead, if you define a structure datatype and wish to send or receive
multiple items, you should explicitly include an 'MPI_UB' entry as the
last member of the structure.  For example, the following code can be used
for the structure foo
.vb
    blen[0] = 1; array_of_displacements[0] = 0; oldtypes[0] = MPI_INT;
    blen[1] = 1; array_of_displacements[1] = &foo.b - &foo; oldtypes[1] = MPI_CHAR;
    blen[2] = 1; array_of_displacements[2] = sizeof(foo); oldtypes[2] = MPI_UB;
    MPI_Type_struct(3, blen, array_of_displacements, oldtypes, &newtype);
.ve

.N Removed
   The replacement for this routine is 'MPI_Type_create_struct'.

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_OTHER

@*/

int MPI_Type_struct(int count, int array_of_blocklengths[], MPI_Aint array_of_displacements[],
                    MPI_Datatype array_of_types[], MPI_Datatype *newtype)
{
    return internal_Type_struct(count, array_of_blocklengths, array_of_displacements, array_of_types, newtype);
}
#endif /* ENABLE_QMPI */
