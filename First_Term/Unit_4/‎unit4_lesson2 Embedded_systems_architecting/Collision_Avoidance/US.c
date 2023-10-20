#include "US.h"

int US_distance = 0;

int get_distance_random(int l,int r, int count);

void(*US_State)();

void US_init()
{
	printf("US_Init\n");
}

State_define(US_busy)
{
	US_State_id = US_busy;

	US_distance=get_distance_random(45,55,1);
	printf("US_busy State : distance = %d  \n",US_distance);
	Us_Distance(US_distance);
	US_State = State(US_busy);

}


int get_distance_random(int l,int r, int count)
{
	int i;
	for(i=0;i<count;i++)
	{
		int x = (rand()%(r-l+1))+l;
		return x;
	}


}
