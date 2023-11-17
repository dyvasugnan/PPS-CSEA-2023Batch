#include<stdio.h>
int main(){
	int base,exponent,i,power=1;
	printf("enter base and exponent");
	scanf("%d%d",&base,&exponent);
	for(i=1;i<=exponent;i++){
		power=power*base;
	}
	printf("power is %d",power);
}
