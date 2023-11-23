#include <stdio.h>
int main()
{
    int sum,i;
    printf("1+3+5....+50");
    scanf("%d",i);
    for(i=1;i<=50;i=i+2)
    {
        sum=sum+2;
    }
    printf("%d",sum);
    return 0;
}

