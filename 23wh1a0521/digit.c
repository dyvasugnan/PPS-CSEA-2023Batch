#include<stdio.h>
int main(){
int num,rem,firstdigit,lastdigit,sum;
printf("enter any number:");
scanf("%d",&num);
lastdigit=num%10;
while(num>0){
        rem=num%10;
	num=num/10;
	firstdigit=rem;
	sum=lastdigit+firstdigit;
	}
	printf("sum of first and last digit=%d",sum);
return 0;
}
