#include<stdio.h>
int fact(int);
int main()
{
    int result=fact(5);
    printf("%d",result);
}
int fact(int a){
    int fact=1,i;
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}
