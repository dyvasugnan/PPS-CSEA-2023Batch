//this program is to display sum of first and last digit
#include<stdio.h>
int main(){
int num,sum;
printf("enter a 3-digit number");
scanf("%d",&num);
int last_digit=num%10;
int first_digit=num/100;
sum=last_digit+first_digit;
printf("sum=%d",sum);
return 0;
}



