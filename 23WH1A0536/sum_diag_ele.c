//To find sum of diagonal elements of matrix
#include <stdio.h>
int main() {
    int rows, cols;
    int i,j, diagsum = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int mat[rows][cols];
    printf("Enter elements of the matrix:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    int diagsum = 0;
    for (i = 0; i < rows; i++) {
        diagsum += mat[i][i];
    }
    printf("Sum of diagonal elements= %d\n", diagsum);
    return 0;
}

