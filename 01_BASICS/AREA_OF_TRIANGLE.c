#include<stdio.h>
int main()
{
    int base,height;
    float area_of_triangle;
    
    printf("enter base:");
    scanf("%d",&base);

    printf("enter height");
    scanf("%d",&height);

    area_of_triangle = 0.5*height*base;
    printf("area of triangle is= %f",area_of_triangle);
}
