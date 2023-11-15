#include<stdio.h>
int main(){
int arr1[10],arr2[10];
printf("enter elements of old array:\n");
for(int i=0;i<=10;i++){
	scanf("%d",&arr1[i]);}
for(int i=0;i<10;i++){
	printf("%d ",arr1[i]);
	}
for(int i=0;i<10;i++){
        arr2[i]=arr1[i];}
printf("\nenter elements of new array:\n");
for(int i=0;i<10;i++){
	printf("%d ",arr2[i]);
}
return 0;
}
