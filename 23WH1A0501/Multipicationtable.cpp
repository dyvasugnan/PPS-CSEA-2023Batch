#include<stdio.h>
int main(){
	int i,j,k,num;
	printf("Enter a number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=1;j<=num;j++)
			printf("%4d",i*j);
		printf("\n");
	}
}
