// palindrome using while loop
#include<stdio.h>
int main(){
int num,rev=0,rem,temp;
printf("enter any number");
scanf("%d",&num);
temp=num;
while(num>0){
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
if(rev==temp)
printf("the given number is a palindrome");
else
printf("the given number is not a palindrome");

return 0;
}

