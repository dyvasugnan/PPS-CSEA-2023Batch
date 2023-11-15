#include <stdio.h>

int main()
{
    int m,n;
    printf("Enter the numbers of rows and columns of a matrix: ");
    scanf("%d %d",&m,&n);
    int arr[m][n],i,j;
    printf("Enter the Matrix elements:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The Matrix elements are:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    int sum=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            sum=sum+arr[i][j];
            
        }
    }
    printf("Sum of the Diagonal elements of the matrix is %d",sum);

    return 0;
}
