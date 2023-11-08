#include<stdio.h>
int main(){
	printf("Enter a number: ");
	int num,factor=1,sum=0,temp;
	scanf("%d,&num");
	temp=2*num;
	while(factor<=num){
		if(num%factor==0){
			sum+=factor;
		}
		factor++;
	}
	if(sum==temp){
		printf("\nThe given number, %d is a perfect number",temp/2);
	}
	else{
		printf("\n The given number, %d is not a perfect number",temp/2);
	}
	return 0;
	}
