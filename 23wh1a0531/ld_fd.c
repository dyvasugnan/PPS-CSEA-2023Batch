//sum of last and first digit
#include <stdio.h>
int main(){
int num,fd,ld,sum;
printf("enter 3 digit number");
scanf("%d",&num);
 fd=num/100;
 ld=num%10;
 sum=fd+ld;
printf("sum of first and last digit is %d",sum);
return 0;
}

