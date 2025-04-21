#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utils.h"

// generate random numbers
// initRandom has to be called once at the beginning of the program

void initRandom() {
    srand(time(NULL)); // init random seed with current time
}

int randomInRange(int min, int max) {
    if(min>max) {
        int temp = min;
        min = max;
        max = temp;
    }
    return rand() % (max-min+1) +min;
}