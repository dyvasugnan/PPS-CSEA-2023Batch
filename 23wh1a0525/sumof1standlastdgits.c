#include<stdio.h>
int main(){
	int num, dig1, diglast;
	printf("Enter a number: ");
	scanf("%d", &num);
	diglast = num % 10;
	for(int i = 0; num != 0; i++){
		dig1 = num % 10;
		num /= 10;
	}
	printf("The sum of the first, %d  and last digit, %d is %d", dig1, diglast,dig1 + diglast);
	return 0;
}
