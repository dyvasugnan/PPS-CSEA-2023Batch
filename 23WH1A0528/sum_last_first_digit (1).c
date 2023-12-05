//to find sum of first and last digit of a given number using for loop
#include<stdio.h>
int main(){
int num,ld,fd,sum;
printf("enter a number");
scanf("%d",&num);
ld = num%10;
printf("%d ",ld);
for(;num>=10;){
	num=num/10;
	}
	fd=num;
	sum=ld+fd;
printf("%d",sum);
return 0;
}
