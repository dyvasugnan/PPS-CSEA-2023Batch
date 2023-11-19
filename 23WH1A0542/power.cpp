#include<stdio.h>
int main(){
	int num, exp;
	printf("Enter the number and the power it is to be raised to: ");
	scanf("%d%d", &num, &exp);
	int n = num;
	for(int i = 0; i < exp; i++){
		num *= n;
		}
	printf("%d",num);
	return 0;
	}
