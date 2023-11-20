//transpose of a matrix
#include<stdio.h>
void main(){
	int o,sum=0;
	printf("enter the order of the matrix: ");
	scanf("%d",&o);
	int mat[o][o],i,j;
	printf("enter the elements of matrix: ");
	for(i=0;i<o;i++){
		for(j=0;j<o;j++)
			scanf("%d",&mat[i][j]);
	}
	printf("matrix: \n");
	for(i=0;i<o;i++){
		for(j=0;j<o;j++)
			printf("%d",mat[i][j]);
		printf("\n");
	}
	for(i=1;i<o;i++){
		for(j=0;j<i;j++){
			sum=mat[i][j]+mat[j][i];
			mat[i][j]=sum-mat[i][j];
			mat[j][i]=sum-mat[j][i];
		}
	}
	printf("transpose of matrix: \n");
	for(i=0;i<o;i++){
		for(j=0;j<o;j++)
			printf("%d",mat[i][j]);
		printf("\n");
	}
}
