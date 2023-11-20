#include<stdio.h>
int main(){
	int mat[10][10],i,j,range;
	printf("enter range :");
	scanf("%d",&range);
	printf("enter %d no of elements :",range*range);
	for(i=0;i<range;i++){
		for(j=0;j<range;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<range;i++){
		for(j=0;j<range;j++){
			printf("%d",mat[i][j]);
					}
	printf("\n");
	}	
		for(i=0;i<range;i++){
		for(j=0;j<i;j++){
			mat[i][j]=mat[i][j]+mat[j][i];
			mat[j][i]=mat[i][j]-mat[j][i];
			mat[i][j]=mat[i][j]-mat[j][i];
		}
	}
	for(i=0;i<range;i++){
		for(j=0;j<range;j++){
			printf("%d",mat[i][j]);
					}
	printf("\n");
	}	
	return 0;
}
