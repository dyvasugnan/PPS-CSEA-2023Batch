#include<stdio.h>
#include<stdbool.h>
int fact(int n){
	int i , factorial = 1;
	for(i = 2 ; i <= n; i++)
		factorial *= 2;
	return factorial;
}


bool isStrong(int number){
	int factSum = 0, rem , temp = number, i;
	while(temp != 0){
		rem = temp % 10;
		factSum += fact(rem);
		temp /= 10;
	}
	if (factSum == number)
		return true;
	else
		return false;
}
int main(){
	int num;
	printf("Enter the number: ");
	scanf("%d" , &num);
	if(isStrong(num))
		printf("Strong number");
	else
		printf("Not strong");
	return 0;
}
