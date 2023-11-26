//this is to display whether the given number is divisible by 5 and not divisible ny 7
#include<stdio.h>
int main(){
int number;
printf("enter any number");
scanf("%d",&number);
if(number%5==0 && number%7!=0)
printf("given number is divisible by 5 but not divisible by 7");
else
printf("given number is not divisible by 5 and is divisible by 7");
return 0;
}
