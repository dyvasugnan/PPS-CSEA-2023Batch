#include<stdio.h>
void increment_2(int[],int);
int main(){
	int size;
	printf("enter the size of array: ");
	scanf("%d",&size);
	int num[size];
	printf("enter %d elements in array: ",size);
	for(int i=0;i<size;i++)
		scanf("%d",&num[i]);
	increment_2(num,size);
	printf("elements after incrementing by 2:");
	for(int j=0;j<size;j++)
		printf("%2d",num[j]);
	return 0;
}
void increment_2(int x[],int l){
	for(int i=0;i<l;i++)
		x[i]=x[i]+2;
}
