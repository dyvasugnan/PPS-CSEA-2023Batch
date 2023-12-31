#include<stdio.h>
#include<stdbool.h>
void swap(int* num1 , int* num2){
	*num1 = *num1 + *num2;
	*num2 = *num1 - *num2;
	*num1 = *num1 - *num2;
}


void bubbleSort(int arr[] , int len){
	int i , j;
	for(i = 0 ; i < len - 1 ; i++){
		for(j = 0 ;j <= len - i ; j++)
			if(arr[j] > arr[j+1]){
				swap(&arr[j] , &arr[j + 1]);
		}
	}
}


void readArr(int arr[] , int len){
	printf("Enter %d elements" , len);
	for(int i = 0 ; i < len ; i++)
		scanf("%d" , &arr[i]);
}


void printArr(int arr[] , int len){
	int i;
	for( i = 0 ; i < len ; i++)
		printf("%4d" , arr[i]);
}


int main(){
	int size;
	printf("Enter the range of the array: ");
	scanf("%d" , &size);
	int arr[size];
	readArr(arr , size);
	printf("\nBefore sorting, the raw data entered is: ");
	printArr(arr , size);
	bubbleSort(arr , size);
	printf("\nAfter sorting, the array entered is: ");
	printArr(arr , size);
	return 0;
}
