#include<stdio.h>
int main(){
	int row,i,j,alphascii=64;//Using the idea of ascii to character conversion; ascii(A)=65
	printf("Enter the number of rows: ");
	scanf("%d",&row);
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++)
			printf("%4c",alphascii+i);
		printf("\n");
		
	}
}
