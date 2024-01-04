#include<stdio.h>
void printarray(int [],int);
void swap( int *, int *);
void bubblesort(int [],int);
main(){
	int n;
	printf("enter size");
	scanf("%d",&n);
	int array[n];
	for(int i=0;i<n;i++)
	scanf("%d",&array[i]);
	printarray(array,n);
	bubblesort(array,n);
	printarray(array,n);
}
void bubblesort(int array[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(array[j]>array[j+1])
			swap(&array[j],&array[j+1]);
		}
	}
}
void swap(int *n1,int *n2){
	int temp;
	temp=*n1;
	*n1=*n2;
	*n2=temp;
}
void printarray(int array[],int range){
	for(int i=0;i<range;i++){
		printf("%4d",array[i]);
	}
	printf("\n");
}

