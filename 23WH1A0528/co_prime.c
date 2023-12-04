//to find out number of coprimes pairs present in between the entered range
#include<stdio.h>
int co_prime(int,int);
int main(){
	int first_number,last_number;
	printf("enter the ranges: ");
	scanf("%d%d",&first_number,&last_number);
int result = co_prime(first_number,last_number);
	printf("%d",result);
return 0;
}
int co_prime(int first_number, int last_number){
	int range,count;
	range=last_number-first_number;
	if(range%2==0)
		count=range/2;
	else
		count=(range+1)/2;
return count;
}
