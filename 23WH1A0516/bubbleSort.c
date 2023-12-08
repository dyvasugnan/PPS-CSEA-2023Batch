#include<stdio.h>
void swapNumbers(int *,int *);
void bubbleSort(int [],int);
void printArray(int [],int);
int main(){
	int arr[100],len,i;
	printf("Enter range of array : ");
	scanf("%d",&len);
	for(i = 0;i < len ; i++){
		scanf("%d",&arr[i]);	
	}
	printf("\nnumbers before sorting : ");
	printArray(arr,len);
	bubbleSort(arr,len);
	printf("\nnumbers after sorting : ");
	printArray(arr,len);
	return 0;	
}
void swapNumbers(int *num1,int *num2){
	*num1 = *num1 + *num2;
	*num2 = *num1 - *num2;
	*num1 = *num1 - *num2;
}
void bubbleSort(int arr[] ,int len){
	int i,j;
	for(i = 0 ;i < len - 1; i++){
		for( j = 0; j < len - i - 1; j++){
			if(arr[j] > arr[j+1]){
				swapNumbers(&arr[j],&arr[j+1]);
			}
		}	
	}
}
void printArray(int arr[],int len){
	int i ;
	for(i = 0;i < len ; i++){
		printf("%d  ",arr[i]);
	}
}
