#include<stdio.h>
int fibonacci(int);
int main(){
	int n;
	printf("Enter the fibonacci you want:");
	scanf("%d",&n);
	int ans=fibonacci(n);
	printf("%dth fibonacci is %d",n,ans);
	
}
int fibonacci(int n){
	int n1=0,n2=1,n3;
	int i;
	for(i=3;i<=n;i++){
		n3=n1+n2;
		n1=n2;
		n2=n3;
	}
	return n3;
}
