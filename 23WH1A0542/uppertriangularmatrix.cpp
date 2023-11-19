#include<stdio.h>
int main()
{
int a[3][3],i,j,count;
printf("print elements of matrix:\n");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
for(i=0;i<3;i++){
for(j=0;j<3;j++){
if(i>j){
	if(a[i][j]==0){
	count++;}
}
}
}
if(count==3)
printf("upper triangular matrix");
else
printf("not a upper triangular matrix");
 
}
