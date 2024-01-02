#include<stdio.h>
int fib(int);
int main() {
int n,i;
printf("Enter n = ");
scanf("%d",&n);
for(i=0;i<n-1;i++)
	printf("%d ",fib(i));
return 0;
}
int fib(int n) {
if(n==0 || n==1) 
	return n;
return fib(n-1)+fib(n-2);
}
