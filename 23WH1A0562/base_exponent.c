#include<stdio.h>
int main()
 {
  int base,exponent,result;
  printf("Enter base and exponent values: ");
  scanf("%d %d",&base,&exponent);
   result=1;
 int i;
  for(i=1;i<=exponent;i++)
   {
    result=result*base;
   }
  printf("%d^%d=%d",base,exponent,result);
 return 0;
 }

