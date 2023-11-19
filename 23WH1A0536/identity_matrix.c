//To find whether matrix is an identity matrix or not
#include<stdio.h>
int main(){
int mat[3][3],count=0;
printf("Enter the elements of matrix : ");
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
		if(i==j && mat[i][j]==1){
				count++;	
			}
		}
	}
if(count==3)
	printf("it is an identity matrix");
else
	printf("it is not an identity matrix");
return 0;
}
