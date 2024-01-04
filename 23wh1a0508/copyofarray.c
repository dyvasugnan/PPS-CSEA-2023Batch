#include<stdio.h>
int main(){
	int i,size,a[20],b[20];
	printf("Enter enter  array size \n");
	scanf("%d",&size);
	printf("enter array elements\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
		}
	for(i=0;i<size;i++){
		b[i]=a[i];
	}
	
	printf("elemts of second array are:\n");
	for(i=0;i<size;i++)
	{
		printf("value inside array b[%d]=%d",i,b[i]);
	}
	return 0;
	}
