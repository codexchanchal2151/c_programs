#include <stdio.h>

int main() {
    int stored_pin = 1234, entered_pin;
    float balance = 5000.00, amount;
    int choice;

    printf("Enter your 4-digit PIN: ");
    scanf("%d", &entered_pin);

    if (entered_pin == stored_pin) {
        printf("\nPIN Verified Successfully!\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Current Balance: $%.2f\n", balance);
        } else if (choice == 2) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount <= balance && amount > 0) {
                balance -= amount;
                printf("Please collect your cash. Remaining Balance: $%.2f\n", balance);
            } else {
                printf("Invalid amount or insufficient balance.\n");
            }
        } else {
            printf("Invalid choice.\n");
        }
    } else {
        printf("Incorrect PIN! Access Denied.\n");
    }

    return 0;
}
