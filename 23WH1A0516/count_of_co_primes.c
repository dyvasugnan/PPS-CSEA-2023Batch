#include<stdio.h>
int countOfCoprimesPairs(int,int);
int main(){
	int lower_lim,upper_lim;
	printf("enter ranges : ");
	scanf("%d %d",&lower_lim,&upper_lim);
	int count = countOfCoprimesPairs(lower_lim,upper_lim);
	printf("%d is count",count);
}
int countOfCoprimesPairs(int l,int r){
	int count,result;
	result = r+l-1;
	count = result/2;
}
