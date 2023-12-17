#include<stdio.h>
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


bool binarySearch(int arr[] , int key){
	int len = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr  ,len);
	int limlow = 0 , limhigh = len - 1;
	while(limlow <= limhigh){
		int mid = (limlow + limhigh)/2;
		if (arr[mid] == key)
			return true;
		else if (arr[mid] < key)
			limlow = mid + 1;	
		else
			limhigh = mid - 1;
	}
	return false;
}

int main(){
	int range;
	printf("Enter the number of elements in the array: ");
	scanf("%d" , &range);
	int arr[range];
	readArr(arr , range);
	bubbleSort(arr , range);
	
	printf("Enter the key to be searched in the element: ");
	int key;
	scanf("%d" , &key);
	int result = binarySearch(arr , key);
	if(result)
		printf("Key present in the Array");
	else
		printf("Key not present in the array." , key , result);
	return 0;
}
