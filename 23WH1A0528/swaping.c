//to swap two numbers using temp
#include <stdio.h>
int main() {
int num1,num2;
printf("enter 2numbers");
scanf("%d%d",&num1,&num2);
printf("before swaping:num1=%d,num2=%d\n",num1,num2);
int temp;
temp=num1;
num1=num2;
num2=temp;
printf("after swaping:num1=%d,num2=%d",num1,num2);
return 0;
}
