#include <stdio.h>

int main() {
    char op;
    double num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    if (op == '+') {
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
    } else if (op == '-') {
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
    } else if (op == '*') {
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
    } else if (op == '/') {
        if (num2 != 0)
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
        else
            printf("Error! Division by zero.\n");
    } else {
        printf("Error! Operator is not correct.\n");
    }
    return 0;
}
