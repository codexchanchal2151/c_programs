#include<stdio.h>
int main()
{
    //given 3 points (x1,y1),(x2,y2),(x3,y3),wap to check if all the 3 points fall on one straight line
    int x1,x2,x3,y1,y2,y3;
    double m1,m2;

    printf("Enter the six value: ");
    scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&y1,&y2,&y3);

    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);

    if(m1=m2)
    {
        printf("All three points fall on the same straight line.");
    }
    else
    {
        printf("The points do not form a straight line.");
    }
    return 0;

}
