//to find reverse of a number
#include <stdio.h>
int main() {
int num,reverse;
printf("enter a number");
scanf("%d",&num);
int last_digit=num%10;
int temp=num/10;
int second_digit=temp%10;
int first_digit=num/100;
printf("%d%d%d",last_digit,second_digit,first_digit);
return 0;
}
