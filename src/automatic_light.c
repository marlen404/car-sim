#include <stdio.h>
#include "automatic_light.h"
#include "utils.h"

void turnLightsOn(CarState *car) {
    car->lightsStatus = 1;
    printf("Lights turned ON.\n");
}

void turnLightsOff(CarState *car) {
    car->lightsStatus = 0;
    printf("Lights turned OFF.\n");
}

void printLightStatus(const CarState *car) {
    printf("Lights are currently %s.\n", car->lightsStatus ? "ON" : "OFF");
}

void autoUpdateLights(CarState *car) {
    int ambientLight = randomIntRange(0, 100); // 0 dunkel, 100 sehr hell
    if (ambientLight < 30) {
        turnLightsOn(car);
    } else {
        turnLightsOff(car);
    }
    printf("Ambient light: %d → Lights %s.\n", ambientLight, car->lightsStatus ? "ON" : "OFF");
}