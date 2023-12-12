#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the values of a,b: ");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("values after swapping=%d%d",a,b);
}
