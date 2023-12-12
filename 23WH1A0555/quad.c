#include<stdio.h>
int main()
{

int num1,num2;
scanf("%d %d",&num1,&num2);
if(num1>0&&num2>0)
 printf("1 Quadrant");
else
 if(num1<0&&num2>0)
  printf("2 Quadrant");
else
 if(num1<0&&num2<0)
  printf("3 Quadrant");
else
 if(num1>0&&num2<0)
  printf("4Quadrant");
else
printf("On Axes");









}












