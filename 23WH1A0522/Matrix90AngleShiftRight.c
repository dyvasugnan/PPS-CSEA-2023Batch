//shifting the matrix 90 degree right
#include<stdio.h>
int main(){
	int o,sum=0,p,temp;
	printf("enter the order of the matrix: ");
	scanf("%d",&o);
	int mat[o][o],i,j;
	printf("enter the elements in a array: ");
	for(i=0;i<o;i++){
		for(j=0;j<o;j++)
			scanf("%d",&mat[i][j]);
	}
	for(i=1;i<o;i++){
		for(j=0;j<i;j++){
			sum=mat[i][j]+mat[j][i];
			mat[i][j]=sum-mat[i][j];
			mat[j][i]=sum-mat[j][i];
		}
	}
	for(i=0;i<o;i++){
		for(j=0,p=o-1;j<o/2;j++,p--){
			temp=mat[i][j];
			mat[i][j]=mat[i][p];
			mat[i][p]=temp;
	}
	}
	for(i=0;i<o;i++){
		for(j=0;j<o;j++)
			printf("%d ",mat[i][j]);
		printf("\n");
	}
	return 0;
}
