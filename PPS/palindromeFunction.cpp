#include<stdio.h>
#include<stdbool.h>
int reverse(int num){
	int n = num , revno = 0 , rem;
	while(n != 0){
		rem = n % 10;
		revno = revno * 10 + rem;
		n /= 10;
	}
	return revno;
}
bool ispalindrome(int num){
	if (reverse(num) == num)
		return 1;
	else
		return 0;
}
int main(){
	int num;
	printf("Enter a number : ");
	scanf("%d" , &num);
	bool ifpalindrome = ispalindrome(num);
	printf("%d" , ifpalindrome);
	return 0;
}