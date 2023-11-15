// to find sum of diagonal elements 
#include <stdio.h>

int main() {
    int a[10][10],i,j,r,c,sum=0;
    printf("enter rows and columns \n");
    scanf("%d %d",&r,&c);
    printf("enter %d values",r*c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        if(i==j){
            sum+=a[i][j];
        }
    }
    printf("sum of diagonal elements =%d",sum);

    return 0;
}
