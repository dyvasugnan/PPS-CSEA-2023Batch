#include<stdio.h>
#include<math.h>
int main(){
int base,exponent,result=1;
printf("enter base");
scanf("%d",&base);
printf("enter exponent");
scanf("%d",&exponent);
result = pow(base,exponent);
printf("%d^%d : %d",base,exponent,result);
return 0;
}
