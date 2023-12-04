//to produce colatz sequence
#include<stdio.h>
void colatz_sequence(int);
int main()
{
	int range;
	printf("enter a digit: ");
	scanf("%d",&range);
	if(range>0)
		printf("%d ",range);
	else
		printf("entered number is negative number");
	colatz_sequence(range);
	return 0;
}
void colatz_sequence(int range)
{
	
	while(range>1)
	{
		
		
			if (range%2==0)
			{
				range=range/2;
				printf("%d ",range);
			}
			else
			{
				range=(3*range)+1;
				printf("%d ",range);
			}
		
	}

}

