//finding nth prime number
#include<stdio.h>
#include<stdbool.h>
bool isPrime(int num){
	int i , count = 0;
	for(i = 1 ; i <= num ; i++)
		if(num % i == 0){
			count++;
		}
	if (count == 2)
		return 1;
	else
		return 0;
}
int nthPrime(int n){
	int i = 2 , count = 0 , reqNum;
	while(count != n){
		if(isPrime(i)){
			reqNum = i;
			count++;
		}
		i++;
	}
	return reqNum;
}
int main(){
	printf("To find the nth prime number, enter n: ");
	int n;
	scanf("%d" , &n);
	int nthPrimeNum = nthPrime(n);
	printf("The %dth prime number is %d" , n , nthPrimeNum);
	return 0;
}
