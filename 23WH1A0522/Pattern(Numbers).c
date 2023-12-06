#include<stdio.h>
void get_pattern(int);
int main(){
	int rows;
	printf("enter the number of rows: ");
	scanf("%d",&rows);
	get_pattern(rows);
	return 0;
}
void get_pattern(int x){
	for(int i=1;i<=x;i++){
		for(int j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
}
