#include<stdio.h>
void main()
{
    int num,n1=0,n2=1,x,i,sum=0;
    printf("enter range ");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        x=n1+n2;
        n1=n2;
        n2=x;
        if(x%2==0)
        {
        sum += sum+x;
        }
    }
    printf("%d",sum);
}