#include<stdio.h>
int row , col , i , j;
void readMat(int mat[row][col]){
	printf("Enter %d numbers: " , row * col);
	for(i = 0 ; i < row ; i++)
		for(j = 0 ; j < col ; j++)
			scanf("%d" , &mat[i][j]);
}
void printMat(int mat[row][col]){
	for(i = 0 ; i < row ; i++){
		for(j = 0 ; j < col ; j++)
			printf("%4d" , mat[i][j]);
		printf("\n");
	}
}
void addMat(int mat1[row][col] , int mat2[row][col] , int matAns[row][col]){
	for(i = 0 ; i < row ; i++)
		for(j = 0 ; j < row ; j++)
			matAns[i][j] = mat1[i][j] + mat2[i][j];
}
int main(){
	printf("Enter the no of rows and colums of the matrices: ");
	scanf("%d%d" , &row , &col);
	int mat1[row][col] , mat2[row][col] , matAns[row][col];
	printf("For the first matrix, ");
	readMat(mat1);
	printf("\nThe first matrix is: \n");
	printMat(mat1);
	printf("For the second matrix, ");
	readMat(mat2);
	printf("\nThe second matrix is: \n");
	printMat(mat2);
	addMat(mat1 , mat2 , matAns);
	printf("\nThe sum of these two matrices is:\n");
	printMat(matAns);
	return 0;
}
