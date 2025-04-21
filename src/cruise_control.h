#ifndef CRUISE_CONTROL_H
#define CRUISE_CONTROL_H

#include "car_state.h"

void activateCruiseControl(CarState *car, int targetSpeed);
void deactivateCruiseControl(CarState *car);
void printCruiseControlStatus(const CarState *car);
void updateCruiseControl(CarState *car);

#endif