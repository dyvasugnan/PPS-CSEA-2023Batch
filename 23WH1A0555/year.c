#include<stdio.h>
int main()
{
int year;
printf("enter year:");
scanf("%d",&year);
if(year%4==0)
{ if(year%400==0||year%100!=0)
   printf("leap year");
}
else
 printf("not a leap year");








}




























