#include<stdio.h>
int main()
{
int num;
printf("enter any number");
scanf("%d",&num);
int last=num%10
while((num/10)!=0)
num=num/10;
int sum=last+num;
printf("%d",sum);
printf("sum of first and last digits is %d",sum);
return 0;
}
