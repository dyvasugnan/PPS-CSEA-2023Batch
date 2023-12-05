#include<stdio.h>
int binarySearch(int[],int,int,int);
int main(){
	int key,len,i;
	printf("Enter range : ");
	scanf("%d",&len);
	printf("Enter %d elements : ",len);
	int arr[len];
	for(i=0;i<len;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter key value : ");
	scanf("%d",&key);
	int lower = 0 , higher = len - 1;
	int result = binarySearch(arr,key,lower,higher);
	if(result == 1){
		printf("key value is found");
	}
	else{
		printf("key value is not found");
	}
	return 0;
}
int binarySearch(int arr[],int k,int L,int H){
	int mid;
	while(L<=H){
		mid = (L + H)/2;
		if(arr[mid] == k){
			return 1;
		}
		if(arr[mid] < k){
			L = mid + 1;
		}
		else{
			H = mid - 1;
		}
	}
	return 0;
}

