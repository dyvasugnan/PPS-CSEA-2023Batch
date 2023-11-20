//transpose of a matrix into same matrix without using temp
#include<stdio.h>
int main(){
int mat[2][2];
printf("enter elements into mat");
for(int i=0; i<2; i++){
	for(int j=0; j<2; j++){
		scanf("%d",&mat[i][j]);
		printf("%d ",mat[i][j]);
		}
	printf("\n");
	}
for(int i=0; i<2; i++){
	for(int j=0; j<2; j++){
		if(i<j || i>j)
			printf("%d ",mat[j][i]);
		else
			printf("%d ",mat[i][j]);
		}
	printf("\n");
	}
return 0;
}

