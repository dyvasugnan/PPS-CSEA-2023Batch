#include<stdio.h>
int main() {
int base,exponent,i;
printf("input base:");
scanf("%d",&base);
printf("input exponent:");
scanf("%d",&exponent);
int power=1;
for(i=1;i<=exponent;i++){
    power=power*base;
}
printf("%d^%d=%d",base,exponent,power);
}
