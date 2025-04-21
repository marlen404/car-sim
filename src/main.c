#include <stdio.h>
#include "utils.h"
#include "car_state.h"

// starts program
// init CarState struct
// show main menu
// passes user choises to functions
// event loop / menu loop

int main() {
    initRandom(); // init random number generator

    CarState car;
    initCarState(&car);
    printCarState(&car);

    return 0;

}
