#include<stdio.h>
int main(){
int mat[3][3],i,j,sum,sumr[3],sumc[3];
printf("Enter 9 elements: ");
for(i=0;i<3;i++)
	for(j=0;j<3;j++)
		scanf("%d",&mat[i][j]);
printf("The row sums are: ");
for(i=0;i<3;i++){
	sum=0;
	for(j=0;j<3;j++)
		sum+=mat[i][j];
	sumr[i]=sum;
	}
for(i=0;i<3;i++)
	printf("\n%d",sumr[i]);
printf("\n The colun sums are: ");
for(i=0;i<3;i++){
	sum=0;
	for(j=0;j<3;j++)
		sum+=mat[j][i];
	sumc[i]=sum;
	}
for(i=0;i<3;i++)
	printf("\n%d",sumc[i]);	
return 0;
}
