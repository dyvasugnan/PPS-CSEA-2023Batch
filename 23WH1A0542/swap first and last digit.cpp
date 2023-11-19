#include<stdio.h>
int main()
{
	int a[10],n,i,temp;
	printf("enter range of matrix");
	scanf("%d",&n);
	printf("enter elements of array:\n");
	scanf("%d",&a[n]);
	for(i=1;i<n;i++)		
	scanf("%d",&a[i]);
	temp=a[0]; 
	a[0]=a[n-1];
	a[n-1]=temp;
	for(i=0;i<n;i++)
	printf("%d",a[i]);
    return 0;	
	}
