#include <stdio.h>

int main() {
    float km, meters, centimeters;

    printf("Enter distance in kilometers: ");
    scanf("%f", &km);

    meters = km * 1000;
    centimeters = km * 100000;

    printf("%.2f km = %.2f meters\n", km, meters);
    printf("%.2f km = %.2f centimeters\n", km, centimeters);

    return 0;
}
