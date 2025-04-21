#ifndef ENGINE_CONTROL_H
#define ENGINE_CONTROL_H

#include "car_state.h"

void startDriving(CarState *car); // gear to 1
void accelerate(CarState *car); // speed +=10
void decelerate(CarState *car); // speeed -=10, not under 0
void reverse(CarState *car); // wenn Speed =0, gear -1
void switchGear(CarState *car, int newGear);

#endif