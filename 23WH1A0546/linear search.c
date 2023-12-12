//linear search
#include<stdio.h>
int linearSearch(int [],int,int);
int main(){
	int key,n;
	int a[n];
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter the elements of array:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the key value:\n");
	scanf("%d",&key);
	int result =linearSearch(a,key,n);
	if(result==1)
		printf("Element is found \n");
	else
		printf("Element is not found\n");
	return 0;
}
int linearSearch(int a[],int key,int n){
	for(int i=0;i<n;i++){
		if(a[i]==key)
			return 1;
		else
			return -1;
	}
}
	 
