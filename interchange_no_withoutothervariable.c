#include<stdio.h>
int main()
{
int num1, num2;
scanf(“%d %d”, &num1, &num2);
printf(“Before Interchange: num1=%d, num2=%d \n”, num1, num2);
num1=num1+num2;
num2= num1-num2;
num1=num1-num2;
printf(“After interchange: num1=%d, num2=%d” , num1, num2);
}

