#include<stdio.h>
#define r 3
#define c 3

void read_arr(int a[r][c]){
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
}

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
	int a[r][c],b[r][c],add[r][c];
	
	printf("enter a matrix: \n");
	read_arr(a);
	printf("your array is:\n");
	mat_print(a);
	printf("enter another matrix: \n");
	read_arr(b);
	printf("your array is:\n");
	mat_print(b);
	printf("result is:");
	add_mat(a,b);
	
}


