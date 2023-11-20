// to find out trace of a matrix
#include<stdio.h>
int main(){
int mat[3][3],sum=0;
printf("input elements of matrix\n");
for(int i=0; i<3; i++){
	for(int j=0; j<3; j++){
		scanf("%d",&mat[i][j]);
		printf("%d ",mat[i][j]);
		}
	printf("\n");
	}
for(int i=0; i<3; i++){
	for(int j=0; j<3; j++){
		if(i==j){
			sum=sum+mat[i][j];
			}
		}
	}
printf("sum of main diagonal elements = %d",sum);
return 0;
}
