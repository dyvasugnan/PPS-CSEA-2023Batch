#include<stdio.h>
int main(){
int mat[3][3],n,i,j,trace=0;
printf("enter element of matrix");
for (i=0;i<3;i++){
for (j=0;j<3;j++){
scanf("%d",&mat[i][j]);
}
}
for (i=0;i<3;i++){
trace = trace + mat[i][i];
}
printf("sum of diagonal elements : %d",trace);
return 0;
}

