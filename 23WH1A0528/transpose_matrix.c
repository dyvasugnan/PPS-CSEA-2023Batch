//to make a matrix as its transpose
#include<stdio.h>
int main(){
int mat[2][2],temp;
printf("enter elements into mat ");
for(int i=0; i<2; i++){
	for(int j=0; j<2; j++){
		scanf("%d",&mat[i][j]);
		}
	}
for(int i=0; i<2; i++){
	for(int j=0; j<2; j++){
		printf("%d ",mat[i][j]);
		}
	printf("\n");
	}
temp=mat[0][1];
mat[0][1]=mat[1][0];
mat[1][0]=temp;
for(int i=0; i<2; i++){
	for(int j=0; j<2; j++){	
		printf("%d ",mat[i][j]);
		}
	printf("\n");
	}
return 0;
}
