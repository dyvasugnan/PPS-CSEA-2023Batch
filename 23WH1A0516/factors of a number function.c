#include<stdio.h>
int factorsOfNumber(int);
int main(){
	int num;
	printf("Enter number : ");
	scanf("%d",&num);
	int factor_count = factorsOfNumber(num);
	printf("\nno.of factors of %d are %d",num,factor_count);
	return 0;
}
int factorsOfNumber(int num){
	int i,count=0;
	for(i = 1; i <= num; i++){
		if(num%i == 0){
			printf("%4d",i);
			count++;	
		}
	}
	return count;
}
