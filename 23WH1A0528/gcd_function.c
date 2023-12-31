//to find out gcd of two numbers
#include<stdio.h>
int gcd(int, int);
int main(){
	int num1,num2;
	printf("enter the numbers: ");
	scanf("%d%d",&num1,&num2);
int result = gcd(num1,num2);
printf("%d",result);
return 0;
}
int gcd(int num1, int num2){
    int i,gcd;
	for(int i=1; i<=num1 && i<=num2; i++){
		if(num1%i==0 && num2%i==0)
	        gcd = i;	    
	}
	return gcd;
}
