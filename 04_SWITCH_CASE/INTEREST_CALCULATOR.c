#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double principal, rate, time, interest, amount;

    printf("--- Interest Calculator ---\n");
    printf("1. Simple Interest\n");
    printf("2. Compound Interest\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    printf("Enter Principal amount: ");
    scanf("%lf", &principal);
    printf("Enter Annual Rate of Interest (%%): ");
    scanf("%lf", &rate);
    printf("Enter Time (in years): ");
    scanf("%lf", &time);

    switch (choice) {
        case 1:
            interest = (principal * rate * time) / 100.0;
            amount = principal + interest;
            printf("Simple Interest = %.2lf\n", interest);
            printf("Total Amount = %.2lf\n", amount);
            break;

        case 2:
            amount = principal * pow((1 + rate / 100.0), time);
            interest = amount - principal;
            printf("Compound Interest = %.2lf\n", interest);
            printf("Total Amount = %.2lf\n", amount);
            break;

        default:
            printf("Invalid option selected.\n");
    }

    return 0;
}
