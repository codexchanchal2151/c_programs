#include <stdio.h>

int main() {
    int choice;
    float balance = 5000.0, amount;

    printf("=== ATM Banking Menu ===\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Your current balance is: $%.2f\n", balance);
            break;
        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            if (amount > 0) {
                balance += amount;
                printf("Successfully deposited $%.2f. New balance: $%.2f\n", amount, balance);
            } else {
                printf("Invalid deposit amount!\n");
            }
            break;
        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                printf("Successfully withdrawn $%.2f. Remaining balance: $%.2f\n", amount, balance);
            } else if (amount > balance) {
                printf("Insufficient balance!\n");
            } else {
                printf("Invalid withdrawal amount!\n");
            }
            break;
        case 4:
            printf("Thank you for using the ATM. Goodbye!\n");
            break;
        default:
            printf("Invalid choice! Please select between 1 and 4.\n");
    }

    return 0;
}
