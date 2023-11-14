#include<stdio.h>
int main (){
int base,exponent,result=1;
printf("enter base");
scanf("%d",&base);
printf("enter exponent");
scanf("%d",&exponent);
for (int i=0;i<exponent;i++){
result = result*base;
}
printf("%d^%d = %d\n",base,exponent,result);
return 0;
}
