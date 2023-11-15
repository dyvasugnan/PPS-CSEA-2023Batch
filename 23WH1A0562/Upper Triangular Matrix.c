#include <stdio.h>

int main()
{
    int arr[3][3],flag=0;
    printf("Enter Matrix elements:\n");
    int i,j;
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
            if(i>=j)
            {
            if(arr[i][j]!=0)
            {
            flag=1;
            break;
            }
            }
            else 
            flag=0;
        }
    }
    if(flag==1)
    printf("not a Upper Triangular Matrix");
    else
    printf("Upper Triangular Matrix");
    return 0;
}