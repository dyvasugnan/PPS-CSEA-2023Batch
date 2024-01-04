#include<stdio.h>
void printarray(int [],int);
void swap(int *,int *);
void selectionsort(int [],int);
main(){
	int n;
	printf("enter size");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printarray(a,n);
	selectionsort(a,n);
	printarray(a,n);
}
void selectionsort(int a[],int n){
	int i,j,mini_index;
	for(i=0;i<n-1;i++){
	 mini_index=i;
	 for(j=i+1;j<n;j++){
	 
	 if(a[mini_index]>a[j])
	 mini_index=j;
	 if(mini_index!=i)
	 swap(&a[i],&a[j]);}
}
}
void swap(int *n1,int *n2){
	int temp;
	temp=*n1;
	*n1=*n2;
	*n2=temp;}
void printarray(int a[],int range){
	for(int i=0;i<range;i++){
		printf("%4d",a[i]);
	}
	printf("\n");
}
	

