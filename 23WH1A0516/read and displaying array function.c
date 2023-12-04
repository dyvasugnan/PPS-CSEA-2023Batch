#include<stdio.h>
void readArray(int[],int);
void displayArray(int[],int);
int main(){
	int arr[30],arr1[30],arr2[30];
	printf("enter 10 numbers :");
	readArray(arr,10);
	printf("enter 9 numbers :");
	readArray(arr1,9);
	printf("enter 8 numbers :");
	readArray(arr2,8);
	displayArray(arr,10);
	printf("\n");
	displayArray(arr1,9);
	printf("\n");
	displayArray(arr2,8);
	return 0;
}
void readArray(int arr[],int len){
	int i;
	for(i = 0; i < len; i++ ){
		scanf("%d",&arr[i]);
	}
		
}
void displayArray(int arr[],int len){
	int i;
	for(i = 0; i < len; i++){
		printf("%4d",arr[i]);
	}
}
