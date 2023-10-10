#include "lifo.h"
#include "stdio.h"
#include "stdlib.h"
unsigned int buff1[5];
void main()
{
	int i, temp=0;
	LIFO_buff_t uart_lifo, i2c_lifo;
	LIFO_init(&uart_lifo,buff1,5);

	unsigned int * buff2 =(unsigned int *) malloc(5*sizeof(unsigned int ));
	LIFO_init(&uart_lifo,buff2,5);

	for(i=0;i<5;i++)
	{
		if(LIFO_add_item(&uart_lifo,i)==LIFO_no_error)
		printf("Uart_lifo add : %d\n",i);
	}

	for(i=0;i<5;i++)
	{
		if(LIFO_get_item(&uart_lifo,&temp)==LIFO_no_error)
		printf("Uart_lifo get : %d\n",temp);
	}
}
