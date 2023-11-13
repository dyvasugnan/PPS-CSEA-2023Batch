#include<stdio.h>
int main(){
        int mat1[10][10], sum = 0, i, j,r,c, result;
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
                       if (i == j){
				if (mat1[i][j] == 1)
					result = 1;
				else{
					result = 0;
					break;
				}
			}
			else{
                                if (mat1[i][j] == 0)
                                        result = 1;
                                else{
                                        result = 0;
                                        break;

				}
               		}
        	}

	}
	printf("\nThe given matrix is ");
	if(result == 0)
		printf("not");
	printf(" an Identity matrix.");
	return 0;
}
