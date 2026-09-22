#include <stdio.h>
int main()
{
    int choice;
    float r, h, result;

    printf("Enter radius: ");
    scanf("%f", &r);

    printf("Enter height: ");
    scanf("%f", &h);

    printf("1. Area\n");
    printf("2. Circumference\n");
    printf("3. Volume\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            // Surface Area = 2πr(r + h)
            result = 2 * 3.14 * r * (r + h);
            printf("Area = %.2f", result);
            break;
            

        case 2:
            // Circumference = 2πr
            result = 2 * 3.14 * r;
            printf("Circumference = %.2f", result);
            break;

        case 3:
            // Volume = πr²h
            result = 3.14 * r * r * h;
            printf("Volume = %.2f", result);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
