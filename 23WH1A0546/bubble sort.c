//bubble sorting
#include<stdio.h>
void bubbleSort(int[],int);
void printArray(int[],int);
void swap(int *,int *);
int main(){
	int n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Array elements before sorting\n");
	printArray(a,n);
	bubbleSort(a,n);
	printf("\n");
	printf("Array elements after sorting\n");
	printArray(a,n);
	return 0;
}
void printArray(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
void bubbleSort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(&a[j],&a[j+1]);
			}
		}
	}
}
void swap(int *n1,int *n2){
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
