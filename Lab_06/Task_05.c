#include<stdio.h>
int main() {
    int units, totalUnits = 0, count = 0;
    float average;

    printf("Enter daily units consumed (enter -999 to stop): ");
    scanf("%d", &units);

    while (units != -999) {
        totalUnits += units;
        count++;
        printf("Enter daily units consumed (enter -999 to stop): ");
        scanf("%d", &units);
    }

    if (count > 0) {
        average = (float)totalUnits / count;
        printf("Average daily consumption: %.2f units\n", average);
    } else {
        printf("No data entered.\n");
    }

    return 0;
}