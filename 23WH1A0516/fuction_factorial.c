#include<stdio.h>
int factorial(int);
int main(){
	int num;
	printf("Enter number : ");
	scanf("%d",&num);
	int result = factorial(num);
	printf("the factorial of given number is %d",result);
	}
int factorial(int num){
	int fact = 1;
	for(int i = 1;i <= num;i++){
		fact = fact*i;
	}
	return fact;
}
			
