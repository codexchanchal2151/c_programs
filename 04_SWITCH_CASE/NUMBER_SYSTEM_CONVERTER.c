#include <stdio.h>

void decimalToBinary(int n) {
    int binary[32], i = 0;
    if (n == 0) {
        printf("Binary: 0\n");
        return;
    }
    while (n > 0) {
        binary[i++] = n % 2;
        n /= 2;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int choice, num;

    printf("--- Number System Converter ---\n");
    printf("1. Decimal to Binary\n");
    printf("2. Decimal to Octal\n");
    printf("3. Decimal to Hexadecimal\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    printf("Enter a decimal integer: ");
    scanf("%d", &num);

    switch (choice) {
        case 1:
            decimalToBinary(num);
            break;
        case 2:
            printf("Octal: %o\n", num);
            break;
        case 3:
            printf("Hexadecimal: %X\n", num);
            break;
        default:
            printf("Invalid choice! Please select between 1 and 3.\n");
    }

    return 0;
}
