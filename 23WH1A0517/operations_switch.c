#include<stdio.h>
int main()
{
	char op;
	int sum=0,diff=0,div=0,prod=0,quo=0;
	int num1,num2;
	printf("enter the operator and two numbers: ");
	scanf("%c %d %d",&op,&num1,&num2);
	switch(op){
		case '+':
			sum=num1+num2;
			printf("sum=%d",sum);
			break;
		case '-':
			diff=num1-num2;
			printf("%d",diff);
			break;
		case '/':
			div=num1/num2;
			printf("%d",div);
			break;
		case '*':
			prod=num1*num2;
			printf("%d",prod);
			break;
		case '%':
			quo=num1%num2;		
			printf("%d",quo);
			break;
		default:
			printf("not defined");
	}
}
