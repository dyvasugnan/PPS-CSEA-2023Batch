// this is find out whether given matrix is upper traingular matrix or not
#include<stdio.h>
int main(){
int mat[3][3],flage=0;
for(int i=0; i<3; i++){
	for(int j=0; j<3; j++){
		scanf("%d",&mat[i][j]);
		printf("%d ",mat[i][j]);
		}
	printf("\n");
	}
for(int i=0; i<3; i++){
	for(int j=0; j<3; j++){
		if(i>j && mat[i][j]!=0)
			flage=1;
			break;
		}
	}
if(flage==1)
	printf("matrix is not upper traingular matrix");
else
	printf("matrix is upper traingular matrix");
return 0;
}
