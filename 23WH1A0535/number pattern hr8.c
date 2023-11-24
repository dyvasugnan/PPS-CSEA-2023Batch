#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

int n=0,i,j,length,begin,end;
scanf("%d", &n);
length=2*n-1;
begin=0;
end=length-1;
int a[length][length];
while(n!=0)
{
    for(i=begin;i<=end;++i)
    {
        for(j=begin;j<=end;++j)
        {
            if(i==begin || i==end || j==begin || j==end)
            a[i][j]=n;
        }
    }
    ++begin;
    --end;
    --n;
}
for(i=0;i<length;i++)
{
    for(j=0;j<length;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
    return 0;
}
