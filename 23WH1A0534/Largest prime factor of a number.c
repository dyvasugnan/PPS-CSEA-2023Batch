#include<stdio.h>
int main()
{
    int n,i,j,c=0,max=0;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        c=0;
        if(n%i==0)
        {
            for(j=1;j<=i;j++) 
            {
                if(i%j==0)
                {
                    c++;
                }
            }
            if(c==2)
            {
                if(i>max)
                max=i;
            }
        }
    }
    printf("%d",max);
}


