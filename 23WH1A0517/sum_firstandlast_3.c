#include<stdio.h>
int main()
{
	int num;
	int l_dig,f_dig,temp,sum=0;
	printf("enter a 3 digit number:");
	scanf("%d",&num);
	l_dig=num%10;
	temp=num/10;
	f_dig=temp/10;
	sum=l_dig+f_dig;
	printf("sum=%d",sum);
}
