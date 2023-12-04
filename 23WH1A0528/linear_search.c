//linear search in an array using functions
#include<stdio.h>
#include<stdbool.h>
bool linear_search(int[],int,int);
int main(){
	int arr[100],range,key;
	printf("enter the range: ");
	scanf("%d",&range);
	printf("enter values in array: ");
	for(int i=0; i<range; i++){
		scanf("%d",&arr[i]);
		}
	printf("enter the key value: ");
	scanf("%d",&key);
bool result=linear_search(arr,range,key);
	if(result==1)
		printf("%d found",key);
	else
		printf("%d not found",key);
return 0;
}
bool linear_search(int arr[],int range,int key){
	for(int i=0; i<=range; i++){
		if (arr[i]==key)
			return 1;
		else
			return 0;
	}
}
