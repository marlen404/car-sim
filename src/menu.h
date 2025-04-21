#ifndef MENU_H
#define MENU_H

#include "car_state.h"

void showMainMenu(CarState *car);
void showEngineMenu(CarState *car);
void showACMenu(CarState *car);
void showLightMenu(CarState *car);
void showCruiseMenu(CarState *car);
void showPDCMenu(CarState *car);

#endif