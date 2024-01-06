#include<stdio.h>
int collatz(int n){
	
	while(n!=1){
		printf("%d ",n);
		
		if(n%2==0){
			n= n/2;
		}
		else n=3*n+1;
	}
	printf("%d ",n);
}
int main(){
	int num;
	scanf("%d",&num);
	
	collatz(num);
	
}
