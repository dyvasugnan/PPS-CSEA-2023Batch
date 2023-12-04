#include<stdio.h>
int isPalindrome(int);
int main(){
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	int result = isPalindrome(num);
	if(result == 1){
		printf("the given number is a palindrome");
	}
	else{
		printf("the given number is not a palindrome");
	}
}
int isPalindrome(int num){
	int temp = num,rem,rev=0;
	while(num>0){
		rem = num % 10;
		rev = rev*10 + rem;
		num = num / 10;
	}
	if(temp == rev){
		return 1;
	}
	else{
		return 0;
	}
} 
