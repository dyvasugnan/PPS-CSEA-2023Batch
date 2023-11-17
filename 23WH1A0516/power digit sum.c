#include<stdio.h>
int main(){
	int pow=1,base,rem,expo,sum=0,i;
	printf("enter base :");
	scanf("%d",&base);
	printf("enter exponent :");
	scanf("%d",&expo);
	for(i=1;i<=expo;i++){
		pow=pow*base;
	}
	printf("power of the %d is %d\n",base,pow);
	while(pow>0){
		rem=pow%10;
		pow=pow/10;
		sum=sum+rem;
	}
	printf("sum of the power of the %d is %d",base,sum);
	return 0;
}
