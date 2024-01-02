#include<stdio.h>
int main()
{
    int p=1;
    int b,e,i;
    printf("Enter base");
    scanf("%d",&b);
    printf("Enter exponent");
    scanf("%d",&e);
    for(i=1;i<=e;i++)
    {
      p=p*b;  
    }
    printf("%d ^ %d = %d",b,e,p);
}
 