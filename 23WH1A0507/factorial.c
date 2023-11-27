#include<stdio.h>
int findFactorial(int);
int main(){
	int num;
	printf("Enter a no:");
	scanf("%d",&num);
	int result=findFactorial(num);
	printf("The factorial of %d is %d",num,result);
}
int findFactorial(int n){
	int i,fact=1;
	for(i=1;i<=n;i++){
		fact*=i;
	}
	return fact;
}
