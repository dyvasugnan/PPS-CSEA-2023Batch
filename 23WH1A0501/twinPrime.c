#include<stdio.h>
#include<stdbool.h>
bool isPrime(int num){
	int i , count = 0;
	for(int i = 1 ; i <= num ; i++)
		if(num % i == 0){
			count++;
		}
	if (count == 2)
		return 1;
	else
		return 0;
}
void generateTwinPrimePairs(int limlower , int limupper){
	int j = 0 , i , primeArr[(limupper - limlower)];
	printf("The twin prime pairs persent in the given range are:");
	for(i = limlower ; i <= limupper ; i++)
		if(isPrime(i)){
			primeArr[j] = i;
			j++;
		}
	for(i = 0 ; i < (sizeof(primeArr)/4 - 1) ; i++)
		if (primeArr[i+1] - primeArr[i] == 2)
			printf("\n(%d , %d)" , primeArr[i] , primeArr[i+1]);
}
int main(){
	int limlower , limupper;
	printf("Enter the upper and lower limts respectively: ");
	scanf("%d%d" , &limupper , &limlower);
	generateTwinPrimePairs(limlower , limupper);
	return 0;
}
