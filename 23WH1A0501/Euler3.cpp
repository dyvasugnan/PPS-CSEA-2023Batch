//Largest prime factor of a given number
#include<stdio.h>
int main(){
	int num,prime,count;
	printf("Enter a number: ");
	prime = 1;
	scanf("%d", &num);
	for(int i = 1 ; i <= num ; i++){
		if(num % i == 0){
			count=0;
			for(int j = 2; j <=i ; j++)
				if (i % j ==0)
					count++;
			if (count == 1)
				if(i > prime)
					prime = i;
		}
	}
	printf("The largest prime factor of the given number %d is %d", num, prime);
	return 0;
}
