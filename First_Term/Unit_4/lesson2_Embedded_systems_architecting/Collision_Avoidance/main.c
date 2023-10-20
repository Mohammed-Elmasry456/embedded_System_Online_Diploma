/*
 * main.c
 *
 *  Created on: ١٣‏/١٠‏/٢٠٢٣
 *      Author: kf 7
 */

#include "CA.h"
#include "DC.h"
#include "US.h"
void setup()
{
	US_init();
	DC_init();

	CA_State = State(CA_waiting);
	DC_State = State(DC_idle);
	US_State = State(US_busy);
}

void main()
{
	setup();
	while(1)
	{
		US_State();
		CA_State();
		DC_State();
	}

}
