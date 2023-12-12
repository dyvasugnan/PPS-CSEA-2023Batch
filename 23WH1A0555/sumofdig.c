#include<stdio.h>
int main()
{
int num,temp=0,sum=0;
scanf("%d",&num);
temp=num%10;
while(num>10){
	num=num/10;
	}
sum=sum+temp+num;
printf(" %d",sum);
}









