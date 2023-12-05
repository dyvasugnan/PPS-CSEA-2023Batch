//this is find whether two matrices are equal or not
#include<stdio.h>
int main(){
int mat1[3][3],mat2[3][3],flage=0;
printf("input elements of matrix1\n");
for(int i=0; i<3; i++){
	for(int j=0; j<3; j++){
		scanf("%d",&mat1[i][j]);
		printf("%d ",mat1[i][j]);
	}
	printf("\n");
}
printf("input elements of matrix2\n");
for(int i=0; i<3; i++){
	for(int j=0; j<3; j++){
		scanf("%d",&mat2[i][j]);
		printf("%d ",mat2[i][j]);
	}
	printf("\n");
}
for(int i=0; i<3; i++){
	for(int j=0; j<3; j++){
		if(mat1[i][j]!=mat2[i][j]){
			flage=1;
			break;
			}
		}
	}
if (flage==1)
	printf("both matrices are not equal");
else
	printf("both matrices are equal");
return 0;
}
