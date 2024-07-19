/* -*- Mode: C; c-basic-offset:4 ; indent-tabs-mode:nil ; -*- */

/* header file for asyn_io_funcs implementation. not intended to be
   user-visible */ 

#ifndef ASYNC_IO_FUNCS_INCLUDE
#define ASYNC_IO_FUNCS_INCLUDE

#include "adio.h"

/*
 *   Constants
 */
#define MPIIO_ASYNC_IO_QUEUE_SIZE 100

/*
 *   Types
 */

/* list of opations */
enum Asinc_io_oper_list {ASYNC_OP_END=0, ASYNC_OP_WAIT=1, ASYNC_OP_WriteContig=2, ASYNC_OP_ReadContig=3, ASYNC_OP_IWriteContig=4, ASYNC_OP_IReadContig=5};
typedef enum Asinc_io_oper_list Asinc_io_oper_list_t;

/* type for dummy data of IWritecontig op. */
struct Async_dummy_data {
    int dummy;
};
typedef struct Async_dummy_data Async_dummy_data_t;

/*
 * Types for sync functions
 */

/* type for storing data of Writecontig op. */
struct Async_WriteContig_data {
    ADIO_File fd;
    const void *buf;
    int count;
    MPI_Datatype datatype;
    int file_ptr_type;
    ADIO_Offset offset;
    MPI_Status *status;
    int *error_code;
};
typedef struct Async_WriteContig_data Async_WriteContig_data_t;

/* type for storing data of Readcontig op. */
struct Async_ReadContig_data {
    ADIO_File fd;
    void *buf;
    int count;
    MPI_Datatype datatype;
    int file_ptr_type;
    ADIO_Offset offset;
    MPI_Status *status;
    int *error_code;
};
typedef struct Async_ReadContig_data Async_ReadContig_data_t;

/*
 * Types for Async functions
 */

/* type for storing data of IWritecontig op. */
struct Async_IWriteContig_data {
    ADIO_File fd;
    const void *buf;
    int count;
    MPI_Datatype datatype;
    int file_ptr_type;
    ADIO_Offset offset;
    ADIO_Request *request;
};
typedef struct Async_IWriteContig_data Async_IWriteContig_data_t;

/* type for storing data of IReadcontig op. */
struct Async_IReadContig_data {
    ADIO_File fd;
    void *buf;
    int count;
    MPI_Datatype datatype;
    int file_ptr_type;
    ADIO_Offset offset;
    ADIO_Request *request;
};
typedef struct Async_IReadContig_data Async_IReadContig_data_t;

/*
 * Type for join element
 */

/* type for storing oper. on the async_io queue */
struct MPIIO_Async_io_queue_elem {
    union {
        Async_dummy_data_t          Dummy_data;
        Async_WriteContig_data_t    WriteContig_data;
        Async_ReadContig_data_t     ReadContig_data;
        Async_IWriteContig_data_t   IWriteContig_data;
        Async_IReadContig_data_t    IReadContig_data;
    } data;
};
typedef struct MPIIO_Async_io_queue_elem MPIIO_Async_io_queue_elem_t;
#define MPIIO_ASYNC_IO_QUEUE_ELEM_SIZE sizeof(MPIIO_Async_io_queue_elem_t)

/*
 *   ROMIO functions
 */

/*  Async_WriteContig - use a thread-based ADIO_WriteContig */
void Async_WriteContig(ADIO_File fd, const void *buf, int count, MPI_Datatype datatype, int file_ptr_type, ADIO_Offset offset, MPI_Status *status, int *error_code);

/*  Async_ReadContig - use a thread-based ADIO_ReadContig */
void Async_ReadContig(ADIO_File fd, void *buf, int count, MPI_Datatype datatype, int file_ptr_type, ADIO_Offset offset, MPI_Status *status, int *error_code);

/* Async_IwriteContig - use a thread-based ADIO_IwriteContig */
void Async_IwriteContig(ADIO_File fd, const void *buf, int count, MPI_Datatype datatype, int file_ptr_type, ADIO_Offset offset, ADIO_Request *request, int *error_code);

/* Async_IreadContig - use a thread-based ADIO_IreadContig */
void Async_IreadContig(ADIO_File fd, void *buf, int count, MPI_Datatype datatype, int file_ptr_type, ADIO_Offset offset, ADIO_Request *request, int *error_code);

#endif

