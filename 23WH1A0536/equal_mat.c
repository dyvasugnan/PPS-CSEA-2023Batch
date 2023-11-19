//To find whether the matrices are qual or not
#include <stdio.h>
int main() {
    int row, col;
    int i,j;
    int equal=1;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);
    int mat1[row][col], mat2[row][col];
    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < row; i++) {
        for ( j = 0; j < col; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    for ( i = 0; i < row; i++) {
        for ( j = 0; j < col; j++) {
            if (mat1[i][j] != mat2[i][j]) {
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
