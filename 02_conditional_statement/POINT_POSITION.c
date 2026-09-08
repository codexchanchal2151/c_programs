#include<stdio.h>
int main()
{
    //given a point (x,y) wap to find out if it lies on the x axis and y axis at the origin viz(0,0)
    int x,y;

    printf("Enter the cordinate:");
    scanf("%d%d",&x,&y);

    if( x==0 && y==0)
    {
        printf("The point is on origin");
    }
    else if(x==0)
    {
        printf("Lies on y-axis");
    }
    else if(y==0)
    {
        printf("Lies on x-axis");
    }
    else
    {
    printf("The point lies in a quadrant");
    }
return 0;
}
