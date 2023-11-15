#include<stdio.h>
int main()
{
    int arr[3][3];
    int i,j,f1=0,f2=0,f3=0;
    printf("Enter the Matrix elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
            
        }
    }
    printf("The Matrix elements are:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }

for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        if(i==j)
        {
            if(arr[i][j]!=1)
            f1=1;
            break;
        }
        if(i>j)
        {
            if(arr[i][j]!=0)
            f2=1;
            break;
        }
        if(i<j)
        {
            if(arr[i][j]!=0)
            f3=1;
            break;
        }
    }
}
printf("\n");
if(f1==1 || f2==1 || f3==1)
printf("Not a Identity Matrix");
else
printf("Identity Matrix");
return 0;
}