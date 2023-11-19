#include<stdio.h>
int main()
{
    int base,exponent,i,result=1;
    printf("Input base: ");
    scanf("%d",&base);
    printf("Input exponent: ");
    scanf("%d",&exponent);
    for(i=1;i<=exponent;i++)
    {
      result=result*base;  
    }
    printf("%d^%d=%d",base,exponent,result);
}
