//copying an array into another array
#include<stdio.h>
void main(){
int numbers[20],size,i;
printf("enter the number of numbers to be entered: ");
scanf("%d",&size);
printf("enter the numbers: ");
for(i=0;i<size;i++){
	scanf("%d",&numbers[i]);
}
for(i=(size-1);i>=0;i--){
	printf("%d",numbers[i]);
}
}
