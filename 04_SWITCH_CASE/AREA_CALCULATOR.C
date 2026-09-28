#include <stdio.h>

int main() {
    int shape;
    float area, radius, length, width, base, height;

    // User ke liye Menu
    printf("--- Area Calculator ---\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &shape);

    // Aapka switch case block (with input prompts)
    switch(shape) {
        case 1: // Circle
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14159 * radius * radius; 
            printf("Area of the Circle = %.2f\n", area);
            break;
            
        case 2: // Rectangle
            printf("Enter the length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width; 
            printf("Area of the Rectangle = %.2f\n", area);
            break;
            
        case 3: // Triangle
            printf("Enter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height; 
            printf("Area of the Triangle = %.2f\n", area);
            break;
            
        default: 
            printf("Invalid shape choice!\n");
    }

    return 0;
}
