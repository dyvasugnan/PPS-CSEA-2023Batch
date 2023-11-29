#include<stdio.h>
int main(){
	int num,arr[20],i,max=0;
	printf("enter num of elements: ");
	scanf("%d",&num);
	printf("enter elements: ");
	for(i=0;i<num;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<num;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("%d is the max number",max);
}
