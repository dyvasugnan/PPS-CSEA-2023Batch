#include<stdio.h>
int main() {
    int row, col;
int i,j;
int equal=1;
    printf("Enter rows: ");
    scanf("%d", &row);
    printf("Enter columns: ");
    scanf("%d", &col);

    int matrix1[row][col], matrix2[row][col];

 printf("Enter elements of the first matrix:\n");
    for (i = 0; i < row; i++) {
        for ( j = 0; j < col; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for ( i = 0; i < row; i++) {
        for ( j = 0; j < col; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
            	equal=0;
            	break;
            }
        }
        }
    

    
    if (equal==1) {
        printf("Matrices are  equal.\n");
    } 
	else{
	
        printf("Matrices are not equal.\n");
    }
}

