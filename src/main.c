#include <stdio.h>
#include "sensor-logic.h"

int main() {
    int moisture = readSoilMoisture();
    printf("Current soil moisture: %d\n", moisture);
    return 0;
}