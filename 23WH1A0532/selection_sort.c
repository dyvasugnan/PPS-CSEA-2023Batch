// this program is about selection sort
#include<stdio.h>
void selectionSort(int[],int);
void swap(int*,int*);
int main(){
	int len,i;
	printf("enter the length of the array:");
	scanf("%d",&len);
	int a[len];
	printf("enter the elements of the array");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	selectionSort(a,len);
	for(i=0;i<len;i++){
		printf("%d",a[i]);
	}
	return 0;
}
void selectionSort(int a[],int n){
	int min_index,i,j;
	for(i=0;i<n-1;i++){
		min_index=i;
		for(j=i+1;j<n;j++){
		     if(a[min_index]>a[i]){
			 min_index = j;
		}
		if(min_index!=i){
		swap(&a[i], &a[min_index]);
	}
}
void swap(int *n1,int *n2){
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
