#include<stdio.h>
#include<stdbool.h>
bool isPalindrome(int);


int main(){
	int num;
	printf("Enter a no:");
	scanf("%d",&num);
	int ans=isPalindrome(num);
	if(ans==1)  printf("Palindrome number");
	else printf("Not a Palindrome");
	
 	
}
bool isPalindrome(int n){
	int temp=n;
	int rem,rev_no=0;
	int i;
	while(n!=0){
		rem=n%10;
		n/=10;
		rev_no=rev_no*10+rem;
	}
	if(temp==rev_no)  return 1;
	else              return 0;
}
