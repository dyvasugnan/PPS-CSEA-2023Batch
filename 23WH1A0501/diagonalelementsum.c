#include<stdio.h>
int main(){
        int mat1[10][10], sum = 0, i, j,r,c;
        printf("Enter the number of rows anf columns (less than 10): ");
        scanf("%d%d", &r, &c);
        printf("For the 1st matrix, enter %d numbers: ", r * c);
        for(i = 0; i < r; i++){
                for(j = 0; j < c; j++){
                        scanf("%d", &mat1[i][j]);
               }
        }
        for(i = 0; i < r; i++){
                for(j = 0; j < c; j++){
                	if (i == j)
				sum += mat1[i][j];
               }
        }
	printf("Sum of the diagonal elements of the given matrix is %d", sum);

       return 0;
}
