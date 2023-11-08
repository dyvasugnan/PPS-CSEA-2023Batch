#include<stdio.h>
int main(){
	int a[3][3],i,j,zero=0;
	printf("Enter 9 values: ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	printf("The 3X3 matrix with given elements after conveting into an upper triangular matrix is: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i<=j)
				printf("%4d",a[i][j]);
			else
				printf("%4d",zero);
		}
		printf("\n");
	}
}
