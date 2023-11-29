#include<stdio.h>
int main()
{
	int arr[100],i,num;
	printf("enter number of values: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		scanf("%d",&arr[i]);
		
	}
	printf("array in reverse is:");
	for(i=num;i>0;i--){
		printf(" %d ",arr[i]);	
	}
}
