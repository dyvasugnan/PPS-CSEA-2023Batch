#include<stdio.h>
#include<stdbool.h>
bool isPrime(int num){
	int i , count = 0;
	if(num == 2 || num == 3){
		return true;
	}
	else{	
		for(i = 1 ; i <= num / 2 ; i++)
			if(num % i == 0)
				count++;
		if (count == 1)
			return true;
		else
			return false;
	}
}


int linearSearch(int arr[]  ,int key){
	int index , i;
	for(i = 0 ; i < (sizeof(arr) / sizeof(arr[i])) ; i++)
		if(key == arr[i])
			return i;
	return -1;
}

int main(){
	printf("Enter the number of integers in the array: ");
	int i , range;
	scanf("%d" , &range);
	int arr[range];
	printf("Enter %d numbers: " , range);
	for(i = 0 ; i < range ; i++)
		scanf("%d" , &arr[i]);
	i = 0;
	while(true){
		if(isPrime(arr[i])){
			printf("The first prime numberin the array is %d, at %d location" , arr[i] , i);
				break;
		}
		i++;
		if (i == range){
			printf("No prime number present.");
			break;
		}
	}
	return 0;
}
