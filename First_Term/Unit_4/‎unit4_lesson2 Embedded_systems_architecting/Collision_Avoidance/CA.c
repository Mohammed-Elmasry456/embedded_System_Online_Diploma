/*
 * CA.c
 *
 *  Created on: ١٣‏/١٠‏/٢٠٢٣
 *      Author: kf 7
 */

#include "CA.h"
int CA_speed = 0;
int CA_distance = 0;
int threshold = 50;


void(*CA_State)();
void Us_Distance(int d)
{
	CA_distance = d;
	(CA_distance <= threshold)? (CA_State = State(CA_waiting)) : (CA_State = State(CA_driving));
	printf("US------distance = %d ------->CA\n",CA_distance);


}


State_define(CA_waiting)
{
	CA_State_id = CA_waiting;
	printf("CA_Waiting State : distance = %d , speed = %d  \n",CA_distance,CA_speed);
	CA_speed  = 0;
	DC_Motor_Speed(CA_speed);


}
State_define(CA_driving)
{
	CA_State_id = CA_driving;
	printf("CA_Driving State : distance = %d , speed = %d  \n",CA_distance,CA_speed);
	CA_speed  = 30;
	DC_Motor_Speed(CA_speed);

}


