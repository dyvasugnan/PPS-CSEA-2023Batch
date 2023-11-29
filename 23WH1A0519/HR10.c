#include<stdio.h>
int max(int,int,int,int);
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int result=max(a,b,c,d);
    printf("%d",result);
}
int max(int a,int b,int c,int d)
{
    int result;
    if(a>=b&&a>=c&&a>=d)
    {
        result=a;
        return result ;
    }
    else if(b>=a&&b>=c&&b>=d)
    {
       result=b;
        return result ;
    }
    else if(c>=a&&c>=b&&c>=d)
    {
       result=c;
        return result ;
    }
    else
    {
       result=d;
        return result ;
    }
}
