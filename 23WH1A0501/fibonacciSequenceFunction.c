#include<stdio.h>
int fib(int nthTerm){
	int term1 = 0 , term2 = 1 , termn = term1 + term2 , count = 2;
	if (nthTerm == 1)
		return term1;
	else if (nthTerm == 2)
		return term2;
	else{
		while(count <= nthTerm){
			term1 = term2;
			term2 = termn;
			termn = term1 + term2;
			count++;
		}
	}
	return termn;
}
int main(){
	int maxTermNo;
	printf("Enter the number of terms in the fibonacci series to be generated: ");
	scanf("%d" , &maxTermNo);
	for(int i = 0 ; i < maxTermNo ; i++)
		printf("%4d" , fib(i));
	return 0;
}
