#include <stdio.h>

int main() {
    int choice;
    float area, radius, length, width, base, height, side;

    printf("=== Geometric Calculator ===\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Triangle\n");
    printf("4. Area of Square\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14159 * radius * radius;
            printf("Area of the Circle = %.2f\n", area);
            break;
        case 2:
            printf("Enter length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("Area of the Rectangle = %.2f\n", area);
            break;
        case 3:
            printf("Enter base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of the Triangle = %.2f\n", area);
            break;
        case 4:
            printf("Enter side length of the square: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of the Square = %.2f\n", area);
            break;
        default:
            printf("Invalid choice! Please select a valid option from 1 to 4.\n");
    }

    return 0;
}
