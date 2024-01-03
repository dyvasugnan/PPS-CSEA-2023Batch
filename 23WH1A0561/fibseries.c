#include<stdio.h>
int fib(int n);
int main(){
	int n,i;
	printf("enter upto limit: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	
	printf("%d\n",fib(i));
	}
	return 0;
}
int fib(int n){
	if(n==0){
	return 0;
}
if(n==1){
	return 1;
}
	int fibn = fib(n-2)+fib(n-1);
	return fibn;
}
