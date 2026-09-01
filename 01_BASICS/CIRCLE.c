#include<stdio.h>
int main()
{
    float pi=3.14;
     float circumference,radius,area;
     
    printf("enter the radius:");
    scanf("%f",&radius);

    area=pi*radius*radius;  // Area of circle
    circumference=2*pi*radius;  // Circumference of circle

    printf("area of circle:%f\n",area);
    printf("circumference of circle:%f\n",circumference);
}
