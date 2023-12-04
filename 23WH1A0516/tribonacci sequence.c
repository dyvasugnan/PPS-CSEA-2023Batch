#include<stdio.h>
void tribonacciSequence(int);
int main(){
	int range;
	printf("Enter the range : ");
	scanf("%d",&range);
	tribonacciSequence(range);
	return 0;
}
void tribonacciSequence(int range){
	int term1 = 1,term2 = 1,term3 = 1,i,next_term;
	printf("%4d%4d%4d",term1,term2,term3);
	for(i = 1;i <= range-3; i++){
		next_term = term1 + term2 + term3;
		term1 = term2;
		term2 = term3;
		term3 = next_term;
		printf("%4d",next_term);
	}
}
