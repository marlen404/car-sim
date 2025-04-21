#ifndef AUTOMATIC_LIGHT_H
#define AUTOMATIC_LIGHT_H

#include "car_state.h"

void turnLightsOn(CarState *car);
void turnLightsOff(CarState *car);
void printLightStatus(const CarState *car);
void autoUpdateLights(CarState *car);

#endif