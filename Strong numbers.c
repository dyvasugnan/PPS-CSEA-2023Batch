#include<stdio.h>
int main()
{
    int n,i,f=1,rem,sum=0,on;
    printf("Enter a number");
    scanf("%d",&n);
    on=n;
    while(n!=0)
    {
        rem=n%10;
        for(i=1;i<=rem;i++)
        {
            f=f*i;
        }
        sum+=f;
        n=n/10;
    }
    if(on=sum){
        printf("Strong number");
    }
    else{
        printf("Not strong number");
    }
    
    
}
