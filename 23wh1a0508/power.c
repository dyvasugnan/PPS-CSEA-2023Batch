#include<stdio.h>
int main(){
	int i,num,exponent;
	long power=1;
	printf("enter any number");
	scanf("%d",&num);
	printf("enter the exponent value");
	scanf("%d",&exponent);
	for(i=1;i<=exponent;i++){
		power=power*num;
		}
	printf("The final result of %d power %d =%ld",num,exponent,power);
	return 0 ;
		}
