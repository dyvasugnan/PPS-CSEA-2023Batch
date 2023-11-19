 #include <stdio.h> 
int main() 
{ 
	int i, j, m = 3, n = 3, a = 0, sum = 0; 
	int matrix[10][10]; 
	if (m == n) { 
		for (i = 0; i < m; ++i) 
		{
			for (j = 0; j < n; ++j) 
			{
				scanf("%d", &matrix[i][j]); 
			} 
		} 
		printf("The matrix is \n"); 
		for (i = 0; i < m; ++i)
		 { 
			for (j = 0; j < n; ++j) { 
				printf(" %d", matrix[i][j]); 
			} 
			printf("\n"); 
		} 
		for (i = 0; i < m; ++i) { 
			a = a + matrix[i][m - i - 1]; 
		printf("\nMain diagonal elements sum is = %d\n",sum); 
		printf("Off-diagonal elements sum is = %d\n", a); 
	} 
	}else
		printf("not a square matrix\n"); 
	return 0; 
}
