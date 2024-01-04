#include<stdio.h>
int fib(int);
main(){
	int n;
	printf("enter a no");
	scanf("%d",&n);
	int ans=fib(n);
	printf("%d th fibonacci is %d",n,ans);}
int fib(int n){
	int n1=0,n2=1,n3;
	int i;
	for(i=3;i<=n;i++){
		n3=n1+n2;
		n1=n2;
		n2=n3;
	}
	return n3;
}
