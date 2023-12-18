#include<stdio.h>
void  collatz_sequence(int);
int main(){
	int num;
	printf("enter a positive number");
	scanf("%d",&num);
	printf("%d",num);
	collatz_sequence(num);
}
void collatz_sequence(int n){
	while(n>0){
		if(n==1){
			break;
		}
		else if(n%2==0){
			n=n/2;
		}
		else{
			n=3*n+1;
		}
		printf("%4d",n);
	}
}

			
