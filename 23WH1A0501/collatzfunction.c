#include<stdio.h>
void generateCollatz(int startingNum){
	while(1){
		printf("%4d" , startingNum);
		if (startingNum == 1)
			break;
		else if(startingNum % 2 == 0)
			startingNum /= 2;
		else
			startingNum = startingNum * 3 + 1;
	}
}
int main(){
	int num;
	printf("Enter the first term of the collatz sequence: ");
	scanf("%d" , &num);
	generateCollatz(num);
	return 0;
}
