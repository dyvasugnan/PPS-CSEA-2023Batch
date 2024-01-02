#include<stdio.h>
int main(){
	printf("Enter the number of terms of fibonacci series of which even terms are to be summed up: ");
	int term1=0,term2=1,termno,i,termn=term1+term2,sum=0;
	scanf("%d",&termno);
	int nexterm=termno-2;
	printf("The terms are:\n%4d%4d",term1,term2);
	for(i=1;i<=nexterm;i++){
		printf("%4d",termn);
		if(termn%2==0)
			sum+=termn;
		term1=term2;
		term2=termn;
		termn=term1+term2;
	}
	printf("\nSum of even terms= %d",sum);
	return 0;
}
