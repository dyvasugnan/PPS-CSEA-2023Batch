#include<stdio.h>
#define r 3
#define c 3

int mat_print(int arr[r][c]){
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%4d",arr[i][j]);
		}
		printf("\n");
	}
}
int add_mat(int arr1[r][c],int arr2[r][c]){
	int add[r][c];
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			add[i][j]=arr1[i][j]+arr2[i][j];
		}
		printf("\n");
	}
	mat_print(add);
}
int main(){
	int i,j,a[r][c],b[r][c],add[r][c];
	printf("enter a matrix: ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Your matrix is:\n");
	mat_print(a);
	printf("enter b matrix: ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("Your matrix is:\n");
	mat_print(b);
	printf("The result is:\n ");
	int result=add_mat(a,b);
	return result;
}
