//identity  matrix
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
    printf("matrix :\n");
    for(i=0;i<o;i++){
        for(j=0;j<o;j++){
            printf("%d ",mat[i][j]);
            if(i>j){
                if(mat[i][j]==0)
                    count++;
            }
            if(i<j){
                if(mat[i][j]==0)
                    count++;
            }
            if(i==j){
                if(mat[i][j]==1)
                    count++;
            }
        }
        printf("\n");
    }
    if(count==o*o)
        printf("matrix is an identity matrix.");
    else
        printf("matrix is not an identity matrix.");
}
