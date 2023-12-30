#include<stdio.h>
void main(){
    int o;
    printf("enter the order of matrix: ");
    scanf("%d",&o);
    int mat[o][o],count=0,i,j;
    printf("enter the elements in matrix: ");
    for(i=0;i<o;i++){
        for(j=0;j<o;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<o;i++){
        for(j=0;j<o;j++){
            printf("%d ",mat[i][j]);
            if(i>j){
                if(mat[i][j]!=0)
                    count=1;
            }
        }
        printf("\n");
    }
    if(count==0)
        printf("matrix is an upper triangular matrix.");
    else
        printf("matrix is not an upper triangular matrix.");
    }
