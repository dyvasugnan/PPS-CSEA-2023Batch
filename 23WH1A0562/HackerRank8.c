#include <stdio.h>

int max(int,int,int,int);
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int M=max(a,b,c,d);
    printf("%d",M);
}
int max(int a,int b,int c,int d)
{
    int max=0;
    if(a>b && a>c && a>d)
    max=a;
    else if(b>a && b>c && b>d)
    max=b;
    else if(c>b && c>a && c>d)
    max=c;
    else
    max=d;
    return max;
}