#include<stdio.h>
int main(){
int num,sum;
printf("Enter a 3 digit number: ");
scanf("%d",&num);
sum= num/100+num%10;
printf("The sum of the first and last digits of the given number, %d, is %d",num,sum);
return 0;
}
