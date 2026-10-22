#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // First check if the triangle is valid
    if (a + b > c && b + c > a && c + a > b) {
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        } else if (a == b || b == c || c == a) {
            printf("The triangle is Isosceles.\n");
        } else {
            printf("The triangle is Scalene.\n");
        }
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
