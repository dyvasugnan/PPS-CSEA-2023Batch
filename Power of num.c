#include<stdio.h>
int main()
{
int base,exp,res;
printf("base: ");
scanf("%d",&base);
printf("exponent: ");
scanf("%d",&exp);
     res= pow(base,exp);
printf("%d ^ %d=%d",base,exp,res);
}
