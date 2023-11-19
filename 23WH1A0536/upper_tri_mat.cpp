//To find out whether given matrix is upper traingular matrix or not
#include<stdio.h>
int main(){
int mat[3][3],count=0;
printf("Enter the values of matrix : \n");
for(int i=0; i<3; i++){
	for(int j=0; j<3; j++){
		scanf("%d",&mat[i][j]);
	}
}	
for(int i=0; i<3; i++){
	for(int j=0; j<3; j++){
		printf("%d ",mat[i][j]);
		}
	printf("\n");
}
for(int i=0; i<3; i++){
	for(int j=0; j<3; j++){
		if(i>=j && mat[i][j]!=0)
			count=1;
			break;
		}
	}
if(count==1)
	printf("matrix is not upper traingular matrix");
else
	printf("matrix is upper traingular matrix");
return 0;
}
