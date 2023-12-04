// this program is about factorial in functions
#include<stdio.h>
 int fact(int);
int main(){
	int num,f;
	printf("enter num value");
	scanf("%d",&num);
	f = fact(num);
	printf("%d is the factorial",f);
}
int fact(int num){
	int i,fact=1;
	for(i=1;i<=num;i++){
		fact = fact*i;
	
	}
	return fact;
}

