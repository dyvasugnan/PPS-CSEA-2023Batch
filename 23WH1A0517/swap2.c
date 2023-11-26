#include<stdio.h>
int main(){
	int num1=10,num2=20;
	printf("before swappin:%d %d\n",num1,num2);
	num1=num1*num2;
	num2=num1/num2;
	num1=num1/num2;
	printf("after swapping: %d %d",num1,num2);
}
