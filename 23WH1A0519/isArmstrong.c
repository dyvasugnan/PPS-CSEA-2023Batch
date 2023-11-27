#include<stdio.h>
#include<stdbool.h>
bool isArmstrong(int);
int main()
{
 bool result=isArmstrong(15);
 printf("%d",result);
}
bool isArmstrong(int a){
    int temp,sum=0,num,rem;
    num=a;
    while(a>0)
    {
        rem=a%10;
        temp=rem*rem*rem;
        sum=sum+temp;
        a=a/10;
    }
    if(sum==num)
    {
        return 1;
    }
    else
    return 0;
}
