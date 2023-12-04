// this program is about palindrome in functions
#include<stdio.h>
int is_palindrome(int);
int main(){
	int num,p,temp;
	printf("enter num");
	scanf("%d",&num);
	p = is_palindrome(num);
	if(p==1)
	  printf("%d is a palindrome",num);
	else
	  printf("%d is not a palindrome",num);
	
}
	
int is_palindrome(int num){
	int  temp = num,rem,rev = 0;
	while(num>0){
	rem = num%10;
	rev = rev*10+rem;
	num = num/10;
} 
 if (rev==temp)
 return 1;
 else
 return 0;
}
	


