#include <stdio.h>

int main() {
    int choice, itemChoice;

    printf("=== VENDING MACHINE ===\n");
    printf("1. Cold Drinks\n");
    printf("2. Snacks\n");
    printf("Enter your choice (1-2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\n--- Cold Drinks Menu ---\n");
            printf("1. Cola (Rs. 40)\n");
            printf("2. Lemon Soda (Rs. 30)\n");
            printf("Enter item choice (1-2): ");
            scanf("%d", &itemChoice);

            switch (itemChoice) {
                case 1:
                    printf("You ordered Cola. Please pay Rs. 40.\n");
                    break;
                case 2:
                    printf("You ordered Lemon Soda. Please pay Rs. 30.\n");
                    break;
                default:
                    printf("Invalid drink selection.\n");
            }
            break;

        case 2:
            printf("\n--- Snacks Menu ---\n");
            printf("1. Potato Chips (Rs. 20)\n");
            printf("2. Chocolate Bar (Rs. 50)\n");
            printf("Enter item choice (1-2): ");
            scanf("%d", &itemChoice);

            switch (itemChoice) {
                case 1:
                    printf("You ordered Potato Chips. Please pay Rs. 20.\n");
                    break;
                case 2:
                    printf("You ordered Chocolate Bar. Please pay Rs. 50.\n");
                    break;
                default:
                    printf("Invalid snack selection.\n");
            }
            break;

        default:
            printf("Invalid main category selection.\n");
    }

    return 0;
}
