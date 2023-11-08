#include<stdio.h>
 
void main()
{
    int i,j,k,n;
 
    printf("Enter till which value you want to print\n");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%c",(char)(i+64));//Replace i with j for a ab abc type and with k for f ee ddd.....aaaaaa type
        }
        printf("\n");        
    }
}
