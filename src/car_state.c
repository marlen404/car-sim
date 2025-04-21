#include <stdio.h>
#include "car_state.h"

void initCarState(CarState *car) {
    car->speed = 0;
    car->gear = -2; // Parked
    car->cruiseControlActive = 0;
    car->target_cruiseControlSpeed = 0;
    car->insideTemp = 20;
    car->lightsStatus = 0;
    car->space = 100;
}

void printCarState(const CarState *car) {
    printf("___Car State:___\n");
    printf("Speed: %d km/h\n", car->speed);
    printf("Gear: %d\n", car->gear);
    printf("Cruise Control: %s", car->cruiseControlActive ? "Active" : "Inactive");
    if(car->cruiseControlActive) {
        printf(" (Target Speed: %d km/h)\n", car->target_cruiseControlSpeed);
    } else {
        printf("\n");
    }
    printf("Inside Temperature: %d C\n", car->insideTemp);
    printf("Lights Status: %s\n", car->lightsStatus ? "On" : "Off");
    printf("Space to obstacle: %d cm\n", car->space);
    printf("____________________\n");
}