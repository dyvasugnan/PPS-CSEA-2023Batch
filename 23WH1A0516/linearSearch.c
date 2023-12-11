#include<stdio.h>
int linearSearch(int[],int,int);
int main(){
	int len,key,i;
	printf("Enter range of an array :");
	scanf("%d",&len);
	int arr[len];
	printf("Enter %d numbers : ",len);
	for(i = 0; i < len; i++){
		scanf("%d",&arr[i]);	
	}
	printf("Enter key value : ");
	scanf("%d",&key);
	int index = linearSearch(arr,len,key);
	if(index >= 0){
	printf("%d is the index of key value in the given array",index);
	}
	else{
		printf("key value not found...!");
	}
	return 0;
}
int linearSearch(int arr[],int len,int key){
	int i;
	for(i = 0; i < len; i++ ){
		if(arr[i] == key){
			return i;
			break;
		}
	}
	return -1;
}
