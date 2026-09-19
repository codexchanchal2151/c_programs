#include<stdio.h>
int main()
{
    int i,n;
    int sum=0;

    printf("enter a number:");
    scanf("%d",&n); 

    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
        printf("sum of the number:%d",sum);
    
    return 0;
}
