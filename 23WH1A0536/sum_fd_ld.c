//sum of first and last digits#include<stdio.h>
int main(){
	int num;
	printf("enter number");
	scanf("%d",&num);
int	ld=num%10;
num=num/10;int i,rem;
	for(i=0;num!=0;i++){
		rem=num%10;
		num=num/10;
		
	}
int	fd=rem;
	printf("sum is %d",fd+ld);
}
