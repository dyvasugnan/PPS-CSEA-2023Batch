//Sum of factorials of digits=original no
#include<stdio.h>
int main(){
	printf("Enter a number: ");
	int num,n,sum=0,rem,i,product;
	scanf("%d",&num);
	n=num;
	while(n!=0){
		rem=n%10;
		product=1;
		for(i=1;i<=rem;i++)
			product*=i;
		sum+=product;
		n/=10;
	}
	if(sum==num)
		printf("Strong");
	else
		printf("Not strong");

}
