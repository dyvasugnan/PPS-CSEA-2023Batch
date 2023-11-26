//this is to display whether the given number is a multiple of 3 and 5 or not
#include<stdio.h>
int main(){
int number;
printf("enter any number");
scanf("%d",&number);
if(number%3==0 && number%5==0)
printf("given number is divisible by 3 and 5");
else
printf("given number is not divisible by 3 and 5");
return 0;
}
