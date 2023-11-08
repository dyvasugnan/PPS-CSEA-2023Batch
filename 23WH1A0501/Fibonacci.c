#include<stdio.h>
int main(){
	printf("Enter the number of terms of fibonacci series to be generated: ");
	int term1=0,term2=1,termno,i,termn=term1+term2;
	scanf("%d",&termno);
	int nexterm=termno-2;
	printf("%d\n%d",term1,term2);
	for(i=1;i<=nexterm;i++){
		printf("\n%d",termn);
		term1=term2;
		term2=termn;
		termn=term1+term2;
	}
	return 0;
}
