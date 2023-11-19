#include<stdio.h>
void main()
{
    int i,num=1,count=0;
    while(count<20){
        count = 0;
    for(i=1;i<=20;i++)
        {
            if(num%i==0)
            count += 1;
        }
        num+=1;
    }
    printf("%d",num-1);
}
