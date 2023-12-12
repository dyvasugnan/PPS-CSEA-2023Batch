// binary search
#include<stdio.h>
#include<stdbool.h>
bool binarySearch(int[],int,int,int);
int main(){
	int n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int a[n],key;
	printf("Enter the array elemnets\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the key value\n");
	scanf("%d",&key);
	bool result = binarySearch(a,key,0,n-1);
	if(result==1)
		printf("element is found");
	else
		printf("element is not found");
	return 0;
}
bool binarySearch(int a[],int key,int l,int h){
	int mid;
	while(l<=h){
		mid = (l+h)/2;
		if(a[mid]==key)
			return 1;
		if(a[mid]<key)
			l=mid+1;
		else
			h=mid-1;
	}
	return 0;
}
