#include<stdio.h>
int main()
{
int num;
printf("enter a number:");
scanf("%d",&num);
if (num>0)
	printf("positive number");
else if(num<0)
	printf("negative number");
else
	printf("zero");
return 0;	

}



