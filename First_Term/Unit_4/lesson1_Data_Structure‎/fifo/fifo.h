#ifndef FIFO_H_
#define FIFO_H_
#include "stdint.h"
#include "stdio.h"

#define element_type uint8_t
#define width 5
element_type buf[width];

typedef struct
{
	element_type* base;
	element_type* head;
	element_type* tail;
	unsigned int  count;
	unsigned int  length;
}FIFO_Buf_t;

typedef enum
{
	FIFO_no_error,
	FIFO_full,
	FIFO_empty,
	FIFO_null
}FIFO_status;


FIFO_status FIFO_enqueue(FIFO_Buf_t* fifo_buf,element_type item);
FIFO_status FIFO_dequeue(FIFO_Buf_t* fifo_buf,element_type* item);
FIFO_status FIFO_init(FIFO_Buf_t* fifo_buf,element_type* array_buf,unsigned int  length);
FIFO_status FIFO_Is_Full(FIFO_Buf_t* fifo_buf);
void FIFO_print(FIFO_Buf_t* fifo_buf);
#endif /* FIFO_H_ */
