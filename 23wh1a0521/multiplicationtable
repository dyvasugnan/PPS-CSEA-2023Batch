#include<stdio.h>
#include<string.h>
int main(){
    int grid[100][100],gridlen,i,j;
    printf("enter the size of grid required: ");
    scanf("%d",&gridlen);
    for(i=0;i<=gridlen;i++){
        for(j=0;j<=gridlen;j++){
            if(i>0 && j>0)
                grid[i][j]=i*j;
            if(i==0)
                grid[i][j]=j;
            if(j==0)
                grid[i][j]=i;
            printf("%d ",grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}
