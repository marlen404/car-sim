#include <stdio.h>
#include "cruise_control.h"

void activateCruiseControl(CarState *car, int targetSpeed) {
    if (car->speed >= targetSpeed) {
        car->cruiseControlActive = 1;
        car->target_cruiseControlSpeed = targetSpeed;
        printf("Cruise Control activated at %d km/h.\n", targetSpeed);
    } else {
        printf("Speed too low to activate Cruise Control.\n");
    }
}

void deactivateCruiseControl(CarState *car) {
    car->cruiseControlActive = 0;
    printf("Cruise Control deactivated.\n");
}

void printCruiseControlStatus(const CarState *car) {
    if (car->cruiseControlActive)
        printf("Cruise Control is active at %d km/h.\n", car->target_cruiseControlSpeed);
    else
        printf("Cruise Control is inactive.\n");
}

void updateCruiseControl(CarState *car) {
    if (car->cruiseControlActive) {
        car->speed = car->target_cruiseControlSpeed;
        printf("Speed adjusted to cruise control target: %d km/h.\n", car->speed);
    }
}