#include<stdio.h>
void pattern(int row){
	int i , j;
	for(i = 1 ; i <= row ; i++){
		for(int j = 1 ; j <= i ; j++)
			printf("%4d" , j);
		printf("\n");
	}
}
int main(){
	printf("Enter THE NUMBER OF ROWS: ");
	int noOfRows;
	scanf("%d" , &noOfRows);
	pattern(noOfRows);
	return 0;
}
