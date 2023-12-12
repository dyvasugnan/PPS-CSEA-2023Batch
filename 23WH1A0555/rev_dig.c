#include<stdio.h>
int main()
{


int num,temp,l_dig,s_dig,f_dig,new_num;
printf("enter a number:");
scanf("%d",&num);
l_dig=num%10;
temp=num/10;
s_dig=temp%10;
f_dig=num/100;
new_num=(l_dig*100)+(s_dig*10)+(f_dig*1);
printf("the number in reverse order is: %d",new_num);

















}












