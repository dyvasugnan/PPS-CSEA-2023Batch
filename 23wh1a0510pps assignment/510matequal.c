#include<stdio.h>
void main()
{
    int i,j,row,col,count=0,x;
    printf("enter no. of rows and columns : ");
    scanf("%d %d",&row,&col);
    int mat1[row][col],mat2[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("enter elements : ");
            scanf("%d",&mat1[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("enter elements : ");
            scanf("%d",&mat2[i][j]);
        }
    }
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(mat1[i][j]==mat2[i][j]);
            count +=1;
        }
    }
    x=row*col;
    if(count==x)
        printf("equal");
    else
        printf("not equal");
}