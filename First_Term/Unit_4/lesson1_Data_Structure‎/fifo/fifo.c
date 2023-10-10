#include "fifo.h"


FIFO_status FIFO_enqueue(FIFO_Buf_t* fifo_buf,element_type item)
{
	if(!fifo_buf->base || !fifo_buf->tail || !fifo_buf->head)
		return FIFO_null;
	if(FIFO_Is_Full(fifo_buf)==FIFO_full)
		return FIFO_full;

	*(fifo_buf->head) = item;
	fifo_buf->count++;

	if(fifo_buf->head == ((fifo_buf->base) + fifo_buf->length * sizeof(element_type)))
		fifo_buf->head = fifo_buf->base;
	else
		fifo_buf->head++;


	return FIFO_no_error;

}


FIFO_status FIFO_dequeue(FIFO_Buf_t* fifo_buf,element_type* item)
{
	if(!fifo_buf->base || !fifo_buf->tail || !fifo_buf->head)
			return FIFO_null;
	if(fifo_buf->count == 0)
			return FIFO_empty;

	*item=*(fifo_buf->tail);
	fifo_buf->count--;

	if(fifo_buf->tail == ((fifo_buf->base) + fifo_buf->length * sizeof(element_type)))
		fifo_buf->tail = fifo_buf->base;
	else
		fifo_buf->tail++;

	return FIFO_no_error;

}


FIFO_status FIFO_init(FIFO_Buf_t* fifo_buf,element_type* array_buf,unsigned int  length)
{
	if(array_buf == NULL)
		return FIFO_null;
	fifo_buf->base= array_buf;
	fifo_buf->head= array_buf;
	fifo_buf->tail= array_buf;
	fifo_buf->count = 0;
	fifo_buf->length= length;
	return FIFO_no_error;
}


FIFO_status FIFO_Is_Full(FIFO_Buf_t* fifo_buf)
{
	if(!fifo_buf->base || !fifo_buf->tail || !fifo_buf->head)
		return FIFO_null;
	if(fifo_buf->count == fifo_buf->length)
		return FIFO_full;
	return FIFO_no_error;
}
void FIFO_print(FIFO_Buf_t* fifo_buf)
{
	element_type *temp;
	if(fifo_buf->count == 0)
	{
		printf("FIFO is empty\n");
	}
	temp = fifo_buf->tail;
	printf("=============Print_FIFO=============\n");
	int i;
	for(i=0;i<fifo_buf->count;i++)
	{
		printf("\t %X \n",*temp);
		temp++;

	}
	printf("================\n");


}
