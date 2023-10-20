/*
 * DC.c
 *
 *  Created on: ١٣‏/١٠‏/٢٠٢٣
 *      Author: kf 7
 */

#include "DC.h"
int speed = 0;



void(*DC_State)();

void DC_init()
{
	printf("DC_Init\n");
}

void DC_Motor_Speed(int s)
{
	speed = s;
	DC_State = State(DC_busy);
	printf("CA------speed = %d ------->DC\n",speed);
}

State_define(DC_idle)
{
	DC_State_id = DC_idle;



	printf("DC_idle State : speed = %d  \n",speed);

}
State_define(DC_busy)
{
	DC_State_id = DC_busy;


	printf("DC_busy State : speed = %d  \n",speed);
	DC_State = State(DC_idle);
}




