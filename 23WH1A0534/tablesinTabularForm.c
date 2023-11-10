#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",i);
        for(j=1;j<=10;j++)
        {
            printf("%4d",i*j);
        }
        printf("\n");
    }

    return 0;
}
