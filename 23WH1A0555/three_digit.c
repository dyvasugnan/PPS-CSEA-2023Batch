#include<stdio.h>
int main()
{

int num,temp,sum,l_dig,f_dig;
printf("enter a three digit number:");
scanf("%d",&num);
l_dig=num%10;
temp=num/10;
f_dig=temp/10;
sum=l_dig+f_dig;
printf("the sum of the first and last digits is:%d ",sum);



















}
















