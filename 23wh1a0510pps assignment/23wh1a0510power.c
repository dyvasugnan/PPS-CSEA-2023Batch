#include<stdio.h>
void main()
{
	int base,pow,i,res=1;
	printf("enter base and power : ");
	scanf("%d %d",&base,&pow);
	for(i=0;i<pow;i++)
	{
		res = res*base;
	}
	printf("%d"res);
}