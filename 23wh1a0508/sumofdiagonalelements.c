#include <stdio.h>


int main() {
    int rows, cols;
    int i,j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    

    int matrix[rows][cols];

    printf("Enter elements of the matrix:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int diagonalSum = 0;
    for (i = 0; i < rows; i++) {
        diagonalSum += matrix[i][i];
    }

    printf("Sum of diagonal elements: %d\n", diagonalSum);

    return 0;
}


