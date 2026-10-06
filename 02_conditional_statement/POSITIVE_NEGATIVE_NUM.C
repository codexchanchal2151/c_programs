#include <stdio.h>

int main() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num > 0.0) {
        printf("%.2f is a positive number.\n", num);
    } else if (num < 0.0) {
        printf("%.2f is a negative number.\n", num);
    } else {
        printf("You entered zero.\n");
    }

    return 0;
}
