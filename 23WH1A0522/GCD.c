#include<stdio.h>
int get_gcd(int,int);
int main(){
	int num1,num2;
	printf("enter two numbers who gcd is to be knowm: ");
	scanf("%d%d",&num1,&num2);
	int gcd=get_gcd(num1,num2);
	printf("the gcd of %d and %d is: %d.",num1,num2,gcd);
	return 0;
}
int get_gcd(int a,int b){
	int res;
	for(int i=1;i<=a && i<=b;i++){
		if(a%i==0 && b%i==0)
			res=i;
	}
	return res;
}
