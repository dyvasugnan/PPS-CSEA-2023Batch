//check whether a matrix is identity matrix or not
#include<stdio.h>
void main(){
int mat[10][10],order,i,j,count=0;
printf("enter the order of the matrix: ");
scanf("%d",&order);
printf("enter the elements of the matrix: ");
for(i=0;i<order;i++){
	for(j=0;j<order;j++){
		scanf("%d",&mat[i][j]);
		}
	}
for(i=0;i<order;i++){
	for(j=0;j<order;j++){
		if((i==j && mat[i][j]==1) || (i!=j && mat[i][j]==0))
		count=1;
		}
	}
		if(count==1)
		printf("it is an identity matrix");
}
