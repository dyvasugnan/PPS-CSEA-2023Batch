#include<stdio.h>
int linearSearchOfPrime(int[],int);
int main(){
	int len,i;
	printf("Enter range of an array :");
	scanf("%d",&len);
	int arr[len];
	printf("Enter %d numbers : ",len);
	for(i = 0; i < len; i++){
		scanf("%d",&arr[i]);	
	}
	int index = linearSearch(arr,len);
	if(index >= 0){
	printf("%d is the index of prime number in the given array",index);
	}
	else{
		printf("prime number not found...!");
	}
	return 0;
}
int linearSearchOfPrime(int arr[],int len){
	int i,count,j;
	for(i = 0; i < len; i++ ){
		count = 0;
		for(j = 1; j <= arr[i] ; j++){	
			if(arr[i] % j == 0){
				count++;
			}
		}
		if(count == 2){
			printf("%d\n",arr[i]);
			return i;
			break;
			
		}
		
	}
	return -1;
}
