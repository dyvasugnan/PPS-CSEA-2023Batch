#include<stdio.h>
void main()
{
	int n,i,temp;
	printf("enter any number : ");
	scanf("%d",&n);
	int num[n];
	for(i=0;i<n;i++)
	{
		printf("enter elements : ");
		scanf("%d",&num);
	}
	temp=num[0];
	num[0]=num[n-1];
	num[n-1]=temp;
	for(i=0;i<n;i++)
	printf("%d",num[i]);
}