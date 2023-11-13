#include<stdio.h>
int main(){
printf("Enter any Arithemetic operator: ");
char op;
scanf("%c",&op);
printf("\nEnter any two numbers: ");
int num1,num2;
scanf("%d%d",&num1,&num2);
switch(op){
	case '+':
		printf("\n%d",num1+num2);
		break;
	case '-':
		printf("\n%d",num1-num2);
		break;
	case '*':
		printf("\n%d",num1*num2);
		break;
	case '/':
		printf("\n%d",num1/num2);
		break;
	}
return 0;
}
