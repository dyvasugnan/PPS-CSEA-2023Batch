#include<stdio.h>
void main()
{
	int num,ld,x,rem;
	printf("enter any number : ");
	scanf("%d",&num);
	ld=num%10;
	while(num>0)
	{
		rem = num%10;
		num = num/10;
	}
	x=ld+rem;
	printf("sum of first and last digit is %d",x);
}