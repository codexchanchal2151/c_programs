#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, s, area;

    // Triangle ki teeno sides input le rahe hain
    printf("Enter side a: ");
    scanf("%f", &a);

    printf("Enter side b: ");
    scanf("%f", &b);

    printf("Enter side c: ");
    scanf("%f", &c);

    // Semi-perimeter (s) calculate kar rahe hain
    s = (a + b + c) / 2;

    // Heron's formula: sqrt(s * (s - a) * (s - b) * (s - c))
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of the triangle is: %f\n", area);

    return 0;
}
