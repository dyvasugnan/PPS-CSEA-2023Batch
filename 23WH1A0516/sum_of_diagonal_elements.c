#include<stdio.h>
int main(){
int mat1[3][3];
printf("enter 9 numbers:");
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		scanf("%d",&mat1[i][j]);
	}
}
int sum=0;
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		if(i==j){
		sum=sum+mat1[i][j];
		}
	}
}
printf("sum is %d",sum);
return 0;
}
