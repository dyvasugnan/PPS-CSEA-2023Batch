//to find out whether given matrix is identity matrix or not
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
		if(i==j && mat[i][j]==1){
				flage++;
				
			}
		}
	}
if(flage==3)
	printf("it is an identity matrix");
else
	printf("it is not an identity matrix");
return 0;
}
