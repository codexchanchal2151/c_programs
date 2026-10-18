#include <stdio.h>

int main() {
    double a, b, temp;

    printf("Enter first number (a): ");
    scanf("%lf", &a);
    printf("Enter second number (b): ");
    scanf("%lf", &b);

    // Swapping logic using temp
    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping:\n");
    printf("a = %.2lf\n", a);
    printf("b = %.2lf\n", b);

    return 0;
}
