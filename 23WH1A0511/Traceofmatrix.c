#include <stdio.h>
int main(){
	int i,j,rows,columns,trace = 0;
    printf("enter matrix rows and columns =  ");
	scanf("%d %d", &rows, &columns);
    int mat[rows][columns];
    printf("enter the matrix values =  ");
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++)
			scanf("%d",&mat[i][j]);
	}
    for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			if (i == j)
				trace=trace+mat[i][j];
		}
	}
    printf("the trace of the matrix = %d",trace);
}
