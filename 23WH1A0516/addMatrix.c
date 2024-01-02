#include<stdio.h>
void readMatrix(int row,int col ,int[row][col]);
void printMatrix(int row,int col,int[row][col]);
void addMatrix(int row,int col,int[row][col],int[row][col]);
int main(){
	int row,col,mat1[10][10],mat2[10][10];
	printf("Enter no.of rows and columns : ");
	scanf("%d %d",&row,&col);
	printf("Enter the elements of matrix 1 : ");
	readMatrix(row,col,mat1);
	printMatrix(row,col,mat1);
	printf("Enter the elements of matrix 2 ");
	readMatrix(row,col,mat2);
	printMatrix(row,col,mat2);
	printf("ADDITION OF 2 MATRICES IS \n");
	addMatrix(row,col,mat1,mat2);
	return 0;
}
void readMatrix(int row,int col,int mat[row][col]){
	int i,j;
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			scanf("%d",&mat[i][j]);
		}
	}
}
void printMatrix(int row,int col,int mat[row][col]){
	int i,j;
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			printf("%d",mat[i][j]);
		}
	printf("\n");
	}
}
void addMatrix(int row,int col,int mat1[row][col],int mat2[row][col]){
	int mat3[row][col],i,j;
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			mat3[i][j] = mat1[i][j] + mat2[i][j];
			printf("%d",mat3[i][j]);
		}
	printf("\n");
	}
}


	
