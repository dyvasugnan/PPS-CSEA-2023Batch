#include<stdio.h>
int main(){
	char colour;
	printf("enter a colour");
	scanf("%c",&colour);
	switch(colour){
		case 'r':
			printf("red colour");
			break;
		case 'b':
			printf("blue colour");
			break;
		default:
			printf("out of range");
	}
	return 0;
}
