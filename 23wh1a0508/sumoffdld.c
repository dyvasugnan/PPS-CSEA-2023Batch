#include<stdio.h>
int main(){

int temp,num,fd,ld,sum;
printf("enter a number");
scanf("%d",&num);
temp=num;
ld=num%10;
while(num>10){
num=num/10;
}
fd=num;
printf("sum of fd and ld of %d =%d",temp,fd+ld);
	return 0;
}
