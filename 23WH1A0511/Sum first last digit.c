#include<stdio.h>
void main(){
int num;
printf("enter any number: ");
scanf("%d",&num);
int last=num%10;
while((num/10)!=0)
	num=num/10;
printf("%d",num);
printf("sum of first and last digit: %d",last+num);
}
