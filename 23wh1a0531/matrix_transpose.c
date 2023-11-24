//matrix transpose in same matrix
#include<stdio.h>
int main(){
int mat[2][2],sum;
printf("enter elements of matrix");
for(int i=0;i<2;i++){
	for(int j=0;j<2;j++){
		scanf("%d",&mat[i][j]);
	}
}
for(int i=0;i<2;i++){
	for(int j=0;j<2;j++){
		if(i>j){
			sum=mat[i][j]+mat[j][i]; // sum = sum of a21 and a12
			mat[i][j]=sum-mat[i][j]; //a12=sum-a12 
			mat[j][i]=sum-mat[j][i];// a21=sum-a21
		}
	}
}
for(int i=0;i<2;i++){
	for(int j=0;j<2;j++){
		printf("%4d",mat[i][j]);
	}
printf("\n");
}
return 0;
}
		

