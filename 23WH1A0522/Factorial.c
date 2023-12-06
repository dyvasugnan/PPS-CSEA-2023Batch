#include<stdio.h>
int get_factorial(int);
int main(){
	int num;
	printf("enter a number: ");
	scanf("%d",&num);
	int factorial=get_factorial(num);
	printf("factorial of %d is %d.",num,factorial);
	return 0;
}
int get_factorial(int num){
	int fact=1;
	for(int i=1;i<=num;i++){
		fact=fact*i;
	}
	return fact;
}
