// to check whether the matrices are equal or not
#include <stdio.h>

int main() {
    int a[10][10],b[10][10],i,j,r,c,count=0;
    printf("enter rows and columns \n");
    scanf("%d %d",&r,&c);
    printf("enter %d values\n",r*c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
    printf("enter rows and columns \n");
    scanf("%d %d",&r,&c);
    printf("enter %d values",r*c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        scanf("%d",&b[i][j]);
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        if(a[i][j]!=b[i][j]){
           count++;
        }
    }
    if(count==0)
    printf("matrices are equal");
    else
    printf("matrices are not equal");

    return 0;
}
