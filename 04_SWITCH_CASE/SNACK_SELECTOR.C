#include <stdio.h>

int main() {
    int choice;

    printf("--- Vending Machine Menu ---\n");
    printf("1. Cold Drink (Rs. 40)\n");
    printf("2. Potato Chips (Rs. 20)\n");
    printf("3. Chocolate (Rs. 50)\n");
    printf("4. Biscuits (Rs. 30)\n");
    printf("Enter your item choice (1-4): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("You selected Cold Drink. Please pay Rs. 40.\n");
            break;
        case 2:
            printf("You selected Potato Chips. Please pay Rs. 20.\n");
            break;
        case 3:
            printf("You selected Chocolate. Please pay Rs. 50.\n");
            break;
        case 4:
            printf("You selected Biscuits. Please pay Rs. 30.\n");
            break;
        default:
            printf("Invalid selection! Please choose between 1 and 4.\n");
    }
    return 0;
}
