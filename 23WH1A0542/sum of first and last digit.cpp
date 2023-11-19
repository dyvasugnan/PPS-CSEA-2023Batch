#include<stdio.h>
int main()
{
	int number,lastdigit,i,sum;
	printf("enter a number:\n");
	scanf("%d",&number);
	printf("input number=%d",number);
	lastdigit=number%10;
	for(i=number;number!=0;number=number/10)
	{
	sum=lastdigit+number;
	}
	printf("\nsum of first and last digit=%d",sum);
	return 0;
	
}
