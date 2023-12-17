#include<stdio.h>
int sumOfSquare(int n){
	int sum = n * (n + 1) * (2 * n + 1) / 6;
	return sum;
}
int squareOfSum(int n){
	int sum = n * (n+1) / 2;
	int sumSquare = sum * sum;
	return sumSquare;
}
int main(){
	printf("Enter a number: ");
	int num ; 
	scanf("%d" , &num);
	printf("\n%d" , squareOfSum(num) - sumOfSquare(num));
}
