#include<stdio.h>
int main(){
int mat1[3][3],mat2[3][3];
printf("enter 9 numbers :");
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		scanf("%d",&mat1[i][j]);
	}
}
printf("enter 9 numbers:");
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		scanf("%d",&mat2[i][j]);
	}
}
  int  count=0;
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		if(mat1[i][j]==mat2[i][j]){
			count++;
		}
	}
}
if(count==9){
	printf("both the matrices are equal");
}
else{
	printf("matrices are not equal");
}
return 0;
}
