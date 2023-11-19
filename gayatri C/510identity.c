#include<stdio.h>
int  main()
{
    int row,col,i,j,flag=0;
    printf("enter number of rows and columns : ");
    scanf("%d %d",&row,&col);
    int mat[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("enter elements : ");
            scanf("%d",mat[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if((i==j)&&(mat[i][j]!=1))
            flag = 1;
            break;
            else if((i!=j)&&mat[i][j]!=0)
            flag = 1;
            break;
        }
    }
    if(flag==0)
        printf("given matrix is identity matrix");
    else
    
        printf("given matrix is not identity matrix");
    return flag;
}