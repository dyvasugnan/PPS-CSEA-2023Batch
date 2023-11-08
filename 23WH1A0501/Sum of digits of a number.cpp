#include<stdio.h>
int main(){
	int num,sum=0,rem,n;
	printf("Enter any number: ");
	scanf("%d",&num);
	n=num;
	while(num!=0){
		rem=num%10;
		sum+=rem;
		num/=10;
	}
	printf("The sum of the digits of the number, %d is, %d",n,sum);
}
