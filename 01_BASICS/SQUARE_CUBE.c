#include <stdio.h>

int main() {
    float num, square, cube;

    printf("Enter a number: ");
    scanf("%f", &num);

    square = num * num;
    cube = num * num * num;

    printf("Square of %.2f = %.2f\n", num, square);
    printf("Cube of %.2f = %.2f\n", num, cube);

    return 0;
}
