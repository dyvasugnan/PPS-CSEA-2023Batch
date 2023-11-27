#include<stdio.h>
#include<stdbool.h>
bool ifarmstrong(int num){
	int n = num , cubesum = 0 , rem;
	while(n != 0){
		rem = n % 10;
		cubesum += rem * rem * rem;
		n /= 10;
	}
	if (num == cubesum)
		return 1;
	else
		return 0;
}
int main(){
	printf("Enter a number: ");
	int num;
	scanf("%d" , &num);
	bool result = ifarmstrong(num);
	printf("%d" , result);
	return 0;
}