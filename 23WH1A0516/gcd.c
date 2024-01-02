#include<stdio.h>
int gcd(int,int);
int main(){
	int num1,num2;
	printf("Enter 2 numbers : ");
	scanf("%d %d",&num1,&num2);
	int result = gcd(num1,num2);
	printf("%d is the gcd of 2 numbers",result);
	return 0;
}
int gcd(int num1,int num2){
	if(num2 != 0){
		return gcd(num2,num1 % num2);
	}
	else{
		return num1;
	}
}

