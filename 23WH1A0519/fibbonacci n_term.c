#include<stdio.h>
int n_term(int);
int main()
{
    int result=n_term(6);
    printf("%d",result);
}
int n_term(int a){
    int t1=0,t2=1,nextterm=0,i;
    nextterm=t1+t2;
    for(i=3;i<=a;i++)
    {
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
    }
    return t2;
}
