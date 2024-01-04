#include<stdio.h>
void PrintArray(int a[],int Size){
   for(int i=0;i<Size;i++){
		printf("%d",a[i]);
			}
}
int main(){
	int Size,i,j,num,temp;
	printf("enter size of array");
	scanf("%d",&Size);
	int a[Size];
	printf("enter array elements");
		for(i=0;i<Size;i++){
			scanf("%d",&a[i]);}
	printf("number of times to left rotate an array\n");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		temp=a[0];
		for(j=0;j<Size-1;j++){
			a[j]=a[j+1];
			}
			a[Size-1]=temp;
	}
	printf("array elements after left rotate\n");
	PrintArray(a,Size);
	printf("\n");
	return 0;
	}
