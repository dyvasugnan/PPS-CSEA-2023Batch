#include<stdio.h>
int main()
{
	int num, sum = 0, rem, temp, cube;
	printf("enter a number");
	scanf("%d",&num);
	   while(num > 0)
	   {
	   	rem = num % 10;
	   	sum = sum + rem*rem*rem;
	   	num = num / 10;
		} 
		if(temp == sum)
		{
			printf("Armstrong Num");
		}
		else printf("Not Armstrong Num");
	return 0;	
}
