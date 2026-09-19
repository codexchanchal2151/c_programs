#include<stdio.h>
int main()
{
    //Wap to print sum of digit of a given number
    int n,sum=0,last_digit=0;

    printf("Enter th number: ");
    scanf("%d",&n);

    while(n!=0)
    {
    last_digit=n%10;
    sum=sum+last_digit;
    n=n/10;
    }

    printf("the sum of digit =  %d",sum);

    return 0;
}
