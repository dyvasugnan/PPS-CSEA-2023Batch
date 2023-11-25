#include<stdio.h>
int fibonacciNthTerm(n){
	int term1 = 0 , term2 = 1 , termn = term1 +term2 , count = 3;
	while(count < n){
		term1 = term2;
		term2 = termn;
		termn = term1 + term2;
		count++;
	}
	return termn;
}
int main(){
	int num , termn;
	printf("Enter a number: ");
	scanf("%d" , &num);
	termn = fibonacciNthTerm(num);
	printf("The %dth term in the fibonacci series is: %d", num , termn);
}
