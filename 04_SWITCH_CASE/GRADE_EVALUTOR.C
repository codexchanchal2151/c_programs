#include<stdio.h>
int main()
{  char grade;
printf("ENTER YOUR GRADE (A,B,C,D OR F) :");
scanf("%c",&grade);
switch(grade)
{
 case'A': printf("EXCELLENT\n");
break;
case'B' printf("GOOD\n"); break;
case'C' printf("AVERAGE\n"); break;
case'D' printf("PASS\n"); break;
case'F' printf("fail\n"); break;
defaultf: printf("invalids grade\n");
}
return 0;
}
