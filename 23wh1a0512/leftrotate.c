#include<stdio.h>
int main(){
	int arr[10],i,j,shift;
	printf("enter 10 numbers :");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter no of times to be rotated : ");
	scanf("%d",&shift);
	for(i=0;i<shift;i++){
		int temp=arr[0];
		for(j=0;j<9;j++){
			arr[j]=arr[j+1];
					}
		arr[j]=temp;
	}
	printf("array after rotating %d times \n",shift);
	for(i=0;i<10;i++){
	
	printf("%4d",arr[i]);
}
return 0;
}
	
