#ifndef STATE_H_
#define STATE_H_
#include "stdio.h"
#include "stdlib.h"

#define State_define(x) void ST_##x()
#define State(x) ST_##x
void Us_Distance(int d);
void DC_Motor_Speed(int s);
#endif /* STATE_H_ */
