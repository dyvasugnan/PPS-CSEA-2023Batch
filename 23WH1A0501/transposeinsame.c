#include<stdio.h>
int main(){
	int n;
	printf("Enter the order of the matrix: ");
	scanf("%d" , &n);
	int mat[n][n];
	printf("Enter %d numbers" , n * n);
	for(int i = 0 ; i < n ; i++)
		for(int j = 0 ; j < n ; j++)
			scanf("%d" , &mat[i][j]);
	printf("\nThe given matrix is :\n");
        for(int i = 0 ; i < n ; i++){
                for(int j = 0 ; j < n ; j++)
                       printf("%4d" , mat[i][j]);
		printf("\n");
	}

	for(int i = 0 ; i < n ; i++)
		for(int j = 0 ; j < n && j < i ; j++){
			int temp = mat[j][i];
			mat[j][i] = mat[i][j];
			mat[i][j] = temp;
		}
        printf("\nThe given after transposing is :\n");
        for(int i = 0 ; i < n ; i++){
                for(int j = 0 ; j < n ; j++)
                       printf("%4d" , mat[i][j]);
                printf("\n");
        }
	return 0;

}
