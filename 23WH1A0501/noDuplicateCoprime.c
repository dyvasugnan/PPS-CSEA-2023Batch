#include<stdio.h>
int coprimeCount(int limlower , int limupper){
	int count = (limupper - limlower+1)/2;
	return count;
}
int main(){
	printf("To count the number of co-prime(non-duplicate) pairs, enter the lower and upper limits respectvely: ");
	int limlower , limupper;
	scanf("%d%d" , &limlower , &limupper);
	int count =  coprimeCount(limlower , limupper);
	printf("%d" , count);
}
