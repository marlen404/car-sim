#include <stdio.h>
#include "engine_control.h"

// start driving, accelerate, decelerate, reverse (if speed >= 0)
// switch gears
// speed

void startDriving(CarState *car) {
    if (car->gear == -2 || car->gear == 0) {
        car->gear = 1;
        printf("Driving started. Gear set to 1.\n");
    } else {
        printf("Already in motion or wrong state...\n");
    }
}

void accelerate(CarState *car) {
    if (car->gear > 0) {
        car->speed += 10;
        printf("Accelerating. Speed: %d\n", car->speed);
    } else {
        printf("Cannot accelerate in current gear.\n");
    }
}

void decelerate(CarState *car) {
    if (car->speed > 0) {
        car->speed -= 10;
        if (car->speed < 0) car->speed = 0;
        printf("Decelerating. Speed is now %d km/h.\n", car->speed);
    } else {
        printf("Already stopped.\n");
    }
}

void switchGear(CarState *car, int newGear) {
    if (newGear == -2 || newGear == -1 || (newGear >= 0 && newGear <= 6)) {
        if (car->speed == 0 || newGear == 0 || newGear == -2) {
            car->gear = newGear;
            printf("Gear switched to %d.\n", newGear);
        } else {
            printf("Cannot switch to gear %d while moving.\n", newGear);
        }
    } else {
        printf("Invalid gear.\n");
    }
}