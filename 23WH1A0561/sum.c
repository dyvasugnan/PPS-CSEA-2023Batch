#include<stdio.h>
int main(){
int first_digit,last_digit,n,r,sum=0;
printf("enter any number");
scanf("%d",&n);
last_digit = n%10;
while(n>0){
r= n%10;
n=n/10;
if(n==0)
first_digit=r;
}
sum = first_digit+last_digit;
printf("sum of first digit and last digit is %d",sum);
return 0;
}
