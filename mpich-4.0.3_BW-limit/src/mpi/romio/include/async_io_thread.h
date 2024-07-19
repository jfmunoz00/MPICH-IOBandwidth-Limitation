/* -*- Mode: C; c-basic-offset:4 ; indent-tabs-mode:nil ; -*- */

/* header file for asyn_io_thread implementation. not intended to be
   user-visible */ 

#ifndef ASYNC_IO_THREAD_INCLUDE
#define ASYNC_IO_THREAD_INCLUDE

//#define PRINTF(...) printf (__VA_ARGS__)
#define PRINTF(...)

/*
 *   Types
 */

/* type for storing oper. on the async_io queue */
struct MPIIO_gen_queue_elem {
    int oper;
    int size;
    char *data;
};
typedef struct MPIIO_gen_queue_elem MPIIO_gen_queue_elem_t;

/* type for the queue of the async_io_thread */
struct MPIIO_Async_io_queue {
    int queue_size;
    int elem_size;
    int front;
    int rear;
    MPIIO_gen_queue_elem_t *array;
};
typedef struct MPIIO_Async_io_queue MPIIO_Async_io_queue_t;

/*
 *   Global variables
 */

/* Request queue for async_io_thread */
extern MPIIO_Async_io_queue_t MPIIO_Async_io_queue;

/*
 *   Thread related functions
 */

/* Init queue for async_io_thread */
int MPIIO_Init_async_io_queue (MPIIO_Async_io_queue_t *queue, int queue_size, int elem_size);

/* End queue for async_io_thread */
int MPIIO_End_async_io_queue (MPIIO_Async_io_queue_t *queue);

/* get the size of the queue elem's data */
int MPIIO_elem_size_async_io_queue (MPIIO_Async_io_queue_t *queue);

/* check if queue for async_io_thread is empty */
int MPIIO_IsEmpty_async_io_queue (MPIIO_Async_io_queue_t *queue);

/* check if queue for async_io_thread is full */
int MPIIO_IsFull_async_io_queue (MPIIO_Async_io_queue_t *queue);

/* enqueue element on queue for async_io_thread */
int MPIIO_Enqueue_async_io_queue (MPIIO_Async_io_queue_t *queue, int oper, char *data, int size);

/* dequeue element from queue for async_io_thread */
int MPIIO_Dequeue_async_io_queue (MPIIO_Async_io_queue_t *queue, int *oper, char *data, int *size);

/* wait until queue for async_io_thread is empty */
int MPIIO_WaitEmpty_async_io_queue (MPIIO_Async_io_queue_t *queue);

/* Init the Asynchronous IO thread */
int MPIIO_Init_async_io_thread(int queue_size, int elem_size);

/* End the Asynchronous IO thread */
int MPIO_Finalize_async_io_thread(void);

/*
 *   ROMIO functions
 */

int Async_exec_op(int oper, void *data, int size);

#endif

