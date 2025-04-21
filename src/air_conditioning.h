#ifndef AIR_CONDITIONING_H
#define AIR_CONDITIONING_H

#include "car_state.h"

void setInsideTemperature(CarState *car, int temp);
void printACStatus(const CarState *car);

#endif