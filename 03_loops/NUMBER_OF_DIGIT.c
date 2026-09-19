#include<stdio.h>
int main()
{
    // wap to count digit of a given number
    int n,count=0;

    printf("enter a number:");
    scanf("%d",&n);
    
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("number of digit=%d",count);
    return 0;
}
