#include<stdio.h>
int main(){
	int num,arr[20],i,min=arr[0];
	printf("enter num of elements: ");
	scanf("%d",&num);
	printf("enter elements: ");
	for(i=0;i<num;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<num;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("%d is the min number",min);
}
