#include <stdio.h>

int main()
{
    int n,i,j,c;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("%3d",i);
        }
    }

    return 0;
}
