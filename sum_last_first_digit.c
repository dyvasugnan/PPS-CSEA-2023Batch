//to find sum of first and last digit of a given number using for loop
#include<stdio.h>
int main(){
int num,rem,sum=0;
printf("enter a number");
scanf("%d",&num);
for(;num>0;){
	rem=num%10;
	num=num/10;
	sum=sum+num;
	}
printf("%d",sum);
return 0;
}
