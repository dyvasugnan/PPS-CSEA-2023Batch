#include<stdio.h>
int nth_term(int);
int main(){
	int num,term;
	printf("enter the value of n");
	scanf("%d",&num); 
	term=nth_term(num);
	printf("%d",term);
	return 0;
}
int nth_term(int n){
	
