#include<stdio.h>
bool ispalindrome(int);
main(){
	int num;
	printf("enter any number");
	scanf("%d",&num);
bool ans=ispalindrome(num);
if(ans==1)
printf("Number is palindrome");
else
printf("not palindrome");
}
bool ispalindrome(int num){
	int rev=0,rem;
	int temp=num;
	while(num>0){
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
}
if(temp==rev)
return 1;
else
return 0;
}
