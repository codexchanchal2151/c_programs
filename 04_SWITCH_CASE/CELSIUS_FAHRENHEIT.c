#include <stdio.h>
int main()
{
    int ch;
    float t, result;

    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    
    printf("Enter choice: ");
    scanf("%d", &ch);

    printf("Enter temperature: ");
    scanf("%f", &t);

    switch(ch)
    {
        case 1:
            result = (t * 9 / 5) + 32;
            printf("Fahrenheit = %f", result);
            break;

        case 2:
            result = (t - 32) * 5 / 9;
            printf("Celsius = %f", result);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}






  
