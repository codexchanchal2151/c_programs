#include <stdio.h>
int main()
{
    int l, b, a, p;

    printf("Enter the length: ");
    scanf("%d", &l);

    printf("Enter the breadth: ");
    scanf("%d", &b);

    a = l * b;
    p = 2 * (l + b);

    printf("Area of rectangle = %d\n", a);
    printf("Perimeter of rectangle = %d\n", p);


    if (a > p)
    {
        printf("Area is greater than perimeter");
    }
    else
    {
        printf("Area is not greater than perimeter");
    }
    return 0;
}
