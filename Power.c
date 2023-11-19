#include<stdio.h>
#include<math.h>
int main(){
  int base, exp, res=1;
printf("enter the base and exponent value: ");
scanf("%d%d", &base, &exp);
for(int i=0;i<exp;i++) {
res=res*base;
}
printf("%d^%d=%d", base, exp, res);
}
