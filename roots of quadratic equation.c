#include<stdio.h>
int main()
{
    int a,b,c,d,r1,r2,r;
    printf("enter value of a,b,c,d");
    scanf("%d%d%d%d",&a,&c,&b,&d);
    d=b*b-4*a*c;
    r1=-b+sqrt(d)/2*a;
    r2=-b-sqrt(d)/2*a;
    printf("roots are",r1,r2);
    if (d==0)
    r=-b/2*a;
    printf("dgh,r");
       return 0;
    }
    
    