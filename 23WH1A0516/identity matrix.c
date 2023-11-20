#include<stdio.h>
int main(){
	int mat[3][3],i,j;
	printf("enter 9 numbers:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&mat[i][j]);
		}
	}

int count=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		if(i==j){
			if(mat[i][j]==1)
			count++;
		}
		}
	}
int count1=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		if(i!=j){
			if(mat[i][j]==0)
			count1++;
		}
		}
	}

if(count==3&&count1==6){
	printf("identity matrix");
	
}
else{
	printf("not an identity matrix");
}
return 0;
}
