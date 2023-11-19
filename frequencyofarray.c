#include<stdio.h>
int main(){
int arr[10],num,i,count,size;
printf("enter number of elements elements of array");
scanf("%d",&size);
printf("enter %d elements of an array",size);
for(i=0;i<size;i++){
	scanf("%d",&arr[i]);
}
printf("please enter number to find occurence");
scanf("%d",&num);
count=0;
for(i=0;i<size;i++){
	if(arr[i]==num);{
		count++;
}
}
printf(" \n%d occurs %d times",num,count);
return 0;
}
