// to check whether the matrix is upper triangular or not
#include <stdio.h>

int main() {
    int a[10][10],i,j,r,c,count=0;
    printf("enter rows and columns \n");
    scanf("%d %d",&r,&c);
    printf("enter %d values",r*c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        if(i>j && a[i][j]!=0){
           count++;
        }
    }if(count==0)
    printf("upper triangular matrix");
    else
    printf("not an upper triangular matrix");

    return 0;
}
