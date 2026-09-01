#include<stdio.h>
int main()
{
    float marks_1, marks_2, marks_3, marks_4, marks_5, sum , percentage;

    printf("enter marks_1:");
    scanf("%f",&marks_1);

    printf("enter marks_2:");
    scanf("%f",&marks_2);

    printf("enter marks_3:");
    scanf("%f",&marks_3);

    printf("enter marks_4:");
    scanf("%f",&marks_4);

    printf("enter marks_5:");
    scanf("%f",&marks_5);

    sum = marks_1 + marks_2 + marks_3 + marks_4 + marks_5;
    percentage = (sum/500)*100;

    printf("percentage of five subjects = %f",percentage);
}
