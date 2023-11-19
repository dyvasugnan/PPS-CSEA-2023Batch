#include<stdio.h>
void main()
{
    int i,j,row,col,sum =0;
    printf("enter no. of rows and elements : ");
    scanf("%d %d",&row,&col);
    int ar[row][col];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("enter elements : ");
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(i>j)
            sum += 1;
        }
    }
    if(sum==3)
    printf("given matrix is an upper triangular matrix.");
    else
    printf("not an upper triangular matrix");
}