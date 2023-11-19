#include<stdio.h>
int main()
{
	int arr[10],arr1[10],i;
	
	for(i = 0;i < 10 ; i++)
	{
		scanf("%d",&arr[i]);
	}
		for(i = 0;i < 10 ; i++)
	{
	        arr1[i] = arr[i];
	}
		for(i = 0;i < 10 ; i++)
	{
		printf("%d",arr1[i]);
	}
	
}
