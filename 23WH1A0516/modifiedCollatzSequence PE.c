#include<stdio.h>
void modifiedCollatzSequence(int);
int main(){
		int num;
		printf("enter number : ");
		scanf("%d",&num);
		printf("%d",num);
		modifiedCollatzSequence(num);
		
}
void modifiedCollatzSequence(int num){
	while(num>1){
		if(num % 3 == 0){
			num = num/3;
			printf("%4d D",num);
		}
		else if(num % 3 == 1){
			num = (4*num +2)/3;
			printf("%4d U",num);
		}
		else if(num % 3 == 2){
			num = (2*num - 1)/3;
			printf("%4d d",num);
		}
	}
}
