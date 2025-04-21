#include <stdio.h>
#include "pdc.h"
#include "utils.h"

void checkPDC(CarState *car) {
    car->space = randomIntRange(0, 200); // z.B. Abstand in cm
    if (car->space < 50)
        printf("Warning: Obstacle very close! (%d cm)\n", car->space);
    else
        printf("Obstacle distance: %d cm\n", car->space);
}

void printPDCStatus(const CarState *car) {
    printf("Current distance to obstacle: %d cm\n", car->space);
}