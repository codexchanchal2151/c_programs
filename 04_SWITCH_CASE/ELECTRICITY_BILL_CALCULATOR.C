#include <stdio.h>

int main() {
    int units, choice;
    float bill = 0;

    printf("Enter total units consumed: ");
    scanf("%d", &units);

    // Determine the slab category using switch-case logic
    if (units <= 100) {
        choice = 1;
    } else if (units <= 300) {
        choice = 2;
    } else {
        choice = 3;
    }

    switch (choice) {
        case 1:
            bill = units * 5.0; // Rs. 5 per unit for first 100 units
            break;
        case 2:
            bill = (100 * 5.0) + ((units - 100) * 7.0); // Rs. 7 per unit for next 200 units
            break;
        case 3:
            bill = (100 * 5.0) + (200 * 7.0) + ((units - 300) * 10.0); // Rs. 10 per unit above 300
            break;
        default:
            printf("Invalid consumption.\n");
            return 0;
    }

    printf("Total Electricity Bill: Rs. %.2f\n", bill);
    return 0;
}
