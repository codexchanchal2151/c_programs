#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);

    if(a%5==0 && a%11==0)
    {
        printf("It is divisible by 5 and 11");
    }
    else
    {
        printf("It is not divisible by 5 and 11");
    }
}
