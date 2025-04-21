#ifndef CAR_STATE_H
#define CAR_STATE_H

typedef struct {
    int speed; // km/h
    int gear; // 0 Neutral, 1-6, -1 Reverse, -2 Parked
    int cruiseControlActive; // o/1
    int target_cruiseControlSpeed;
    int insideTemp; // Celsius
    int lightsStatus; // 0/1
    int space; // to obstacle behind car in cm
} CarState;

void initCarState(CarState *car);
void printCarState(const CarState *car);

#endif