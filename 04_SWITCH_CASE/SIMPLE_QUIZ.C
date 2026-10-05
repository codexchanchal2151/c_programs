#include <stdio.h>

int main() {
    int choice;

    printf("What is the capital of India?\n");
    printf("1. Mumbai\n");
    printf("2. New Delhi\n");
    printf("3. Kolkata\n");
    printf("4. Chennai\n");
    printf("Enter your option (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
        case 3:
        case 4:
            printf("Incorrect!\n");
            break;
        case 2:
            printf("Correct! New Delhi is the capital.\n");
            break;
        default:
            printf("Invalid option selected.\n");
    }
    return 0;
}
