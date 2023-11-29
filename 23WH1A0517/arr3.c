#include<stdio.h>
int main()
{
	int arr[20],n,i;
	int sum=0;
	printf("enter number of elements: ");
	scanf("%d",&n);
	printf("enter %d elements: ",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);	
		
	}
	for(i=0;i<n;i++){
		sum+=arr[i];
	}
	printf("%d is the sum of elements",sum);
	
}
