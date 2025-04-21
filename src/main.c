#include <stdio.h>
#include "menu.h"
#include "utils.h"
#include "car_state.h"
#include "engine_control.h"
#include "air_conditioning.h"
#include "automatic_light.h"
#include "cruise_control.h"
#include "pdc.h"

int main() {
    initRandom(); // init random number generator
    CarState car;
    initCarState(&car);
    printCarState(&car);
    showMainMenu(&car);

    return 0;
}

void showMainMenu(CarState *car) {
    int choice;
    do {
        printf("\n=== Main Menu ===\n");
        printf("1. Engine Control\n");
        printf("2. Air Conditioning\n");
        printf("3. Automatic Lights\n");
        printf("4. Cruise Control\n");
        printf("5. Park Distance Control\n");
        printf("6. Print Car State\n");
        printf("0. Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: showEngineMenu(car); break;
            case 2: showACMenu(car); break;
            case 3: showLightMenu(car); break;
            case 4: showCruiseMenu(car); break;
            case 5: showPDCMenu(car); break;
            case 6: printCarState(car); break;
            case 0: printf("Exiting simulation...\n"); break;
            default: printf("Invalid selection.\n");
        }

    } while (choice != 0);
}

void showEngineMenu(CarState *car) {
    int choice;
    do {
        printf("\n=== Engine Control ===\n");
        printf("1. Start Driving\n");
        printf("2. Accelerate\n");
        printf("3. Decelerate\n");
        printf("4. Switch Gear\n");
        printf("0. Back to Main Menu\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                startDriving(car);
                break;
            case 2:
                accelerate(car);
                break;
            case 3:
                decelerate(car);
                break;
            case 4: {
                int newGear;
                printf("Enter new gear (-2 = Park, -1 = Reverse, 0 = Neutral, 1-6): ");
                scanf("%d", &newGear);
                switchGear(car, newGear);
                break;
            }
            case 0:
                printf("Returning to Main Menu...\n");
                break;
            default:
                printf("Invalid selection.\n");
        }
    } while (choice != 0);
}

void showACMenu(CarState *car) {
    int choice, temp;
    do {
        printf("\n=== Air Conditioning ===\n");
        printf("1. Set Cabin Temperature\n");
        printf("2. Show AC Status\n");
        printf("0. Back\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Set temperature (°C): ");
                scanf("%d", &temp);
                setInsideTemperature(car, temp);
                break;
            case 2:
                printACStatus(car);
                break;
            case 0:
                printf("Returning...\n");
                break;
            default:
                printf("Invalid selection.\n");
        }
    } while (choice != 0);
}

void showLightMenu(CarState *car) {
    int choice;
    do {
        printf("\n=== Automatic Lights ===\n");
        printf("1. Auto Update Lights\n");
        printf("2. Turn Lights ON\n");
        printf("3. Turn Lights OFF\n");
        printf("4. Show Light Status\n");
        printf("0. Back\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: autoUpdateLights(car); break;
            case 2: turnLightsOn(car); break;
            case 3: turnLightsOff(car); break;
            case 4: printLightStatus(car); break;
            case 0: printf("Returning...\n"); break;
            default: printf("Invalid selection.\n");
        }
    } while (choice != 0);
}

void showCruiseMenu(CarState *car) {
    int choice, targetSpeed;
    do {
        printf("\n=== Cruise Control ===\n");
        printf("1. Activate Cruise Control\n");
        printf("2. Deactivate Cruise Control\n");
        printf("3. Update Cruise Control (adjust speed)\n");
        printf("4. Show Cruise Control Status\n");
        printf("0. Back\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter target speed: ");
                scanf("%d", &targetSpeed);
                activateCruiseControl(car, targetSpeed);
                break;
            case 2: deactivateCruiseControl(car); break;
            case 3: updateCruiseControl(car); break;
            case 4: printCruiseControlStatus(car); break;
            case 0: printf("Returning...\n"); break;
            default: printf("Invalid selection.\n");
        }
    } while (choice != 0);
}

void showPDCMenu(CarState *car) {
    int choice;
    do {
        printf("\n=== Park Distance Control ===\n");
        printf("1. Check Distance\n");
        printf("2. Show Current Distance\n");
        printf("0. Back\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: checkPDC(car); break;
            case 2: printPDCStatus(car); break;
            case 0: printf("Returning...\n"); break;
            default: printf("Invalid selection.\n");
        }
    } while (choice != 0);
}