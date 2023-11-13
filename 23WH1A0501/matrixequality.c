#include<stdio.h>
int main(){
	int mat1[10][10], mat2[10][10], result, i, j,r,c;
	printf("Enter the number of rows anf columns (less than 10): ");
	scanf("%d%d", &r, &c);
	printf("For the 1st matrix, enter %d numbers: ", r * c);
	for(i = 0; i < r; i++){
		for(j = 0; j < c; j++){
			scanf("%d", &mat1[i][j]);		}
	}
        printf("\nFor the 1st matrix, enter %d numbers: ", r * c);
        for(i = 0; i < r; i++){
                for(j = 0; j < c; j++){
                        scanf("%d", &mat2[i][j]);
                }
        }
	printf("\nThe given matrices are ");
        for(i = 0; i < r; i++){
                for(j = 0; j < c; j++){
                        if (mat1[i][j] == mat2[i][j])
				result = 1;
			else{
				result = 0;
				break;
			}
                }
	}
        if (result == 1)
                printf("equal");
        else
                printf("not equal");
	return 0;      

}
