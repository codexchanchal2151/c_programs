#include <stdio.h>

int main() {
    int choice;
    float balance = 5000.0, amount;

    printf("--- ATM Banking Menu ---\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Current Balance: %.2f\n", balance);
            break;
        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance += amount;
            printf("Successfully deposited. New Balance: %.2f\n", balance);
            break;
        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > balance) {
                printf("Insufficient balance!\n");
            } else {
                balance -= amount;
                printf("Please collect cash. Remaining Balance: %.2f\n", balance);
            }
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
