#include <stdio.h>

int main() {
    int choice;
    float inr, converted;

    printf("--- Currency Converter (INR to Foreign Currency) ---\n");
    printf("Enter amount in INR: ");
    scanf("%f", &inr);

    printf("\nSelect target currency:\n");
    printf("1. US Dollar (USD)\n");
    printf("2. Euro (EUR)\n");
    printf("3. British Pound (GBP)\n");
    printf("4. Japanese Yen (JPY)\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            converted = inr * 0.012; // Approximate rate
            printf("%.2f INR = %.2f USD\n", inr, converted);
            break;
        case 2:
            converted = inr * 0.011;
            printf("%.2f INR = %.2f EUR\n", inr, converted);
            break;
        case 3:
            converted = inr * 0.0094;
            printf("%.2f INR = %.2f GBP\n", inr, converted);
            break;
        case 4:
            converted = inr * 1.84;
            printf("%.2f INR = %.2f JPY\n", inr, converted);
            break;
        default:
            printf("Invalid choice! Please select between 1 and 4.\n");
    }

    return 0;
}
