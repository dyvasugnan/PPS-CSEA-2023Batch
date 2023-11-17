#include<stdio.h>
int main(){
	int arr1[10];
	int arr2[10];
	int i,j;
	printf("enter array elements");
	for(i=0;i<10;i++){
		scanf("%d",&arr1[i]);
	}
	i=0;
	for(j=0;j<10;j++){
		arr2[j]=arr1[i];
		i++;
	}
	printf("array 1:");
	for(i=0;i<10;i++){
		printf("%d ",arr1[i]);
	}
	printf("\n");
	printf("array 2:");
	for(i=0;i<10;i++){
		printf("%d ",arr2[i]);
	}
}
