#include<stdio.h>
int main(){
	int num,rem,fac=1,i=1,sum=0;
	printf("enter any no:");
	scanf("%d",&num);
	while(num){
		rem = num%10;
		while(i<=rem){
		fac=fac*i;
		i++;
	}
		sum=sum+fac;
		num=num/10;
}
	if(num==sum)
	printf("strong no");
	else
	printf("not strong");
	return 0;
}
