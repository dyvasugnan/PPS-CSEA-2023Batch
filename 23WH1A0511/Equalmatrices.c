#include<stdio.h>
void main(){
    int m,n;
    printf("enter number of rows and columns: ");
    scanf("%d%d",&m,&n);
    int mat1[m][n],mat2[m][n],count=0,i,j;
    printf("enter the elements in matrix1: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("enter the elements in matrix2: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(mat1[i][j]==mat2[i][j])
                count++;
        }
    }
    if(count==(m*n))
        printf("both are equal matrices");
    else
        printf("both are not equal matrices");
}
