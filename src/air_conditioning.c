#include <stdio.h>
#include "air_conditioning.h"

void setInsideTemperature(CarState *car, int temp) {
    car->insideTemp = temp;
    printf("Temperature set to %dC.\n", car->insideTemp);
}

void printACStatus(const CarState *car) {
    printf("Current cabin temperature: %dC.\n", car->insideTemp);
}