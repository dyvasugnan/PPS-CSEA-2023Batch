//to calculate factorial of a number
#include<stdio.h>
int main() {
int num,fact=1;
printf("enter a number");
scanf("%d",&num);
for(int i=1; i<=num; i++){
	fact=fact*i;
}
printf("factorial = %d",fact);
return 0;
}
