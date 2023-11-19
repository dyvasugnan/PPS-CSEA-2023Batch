#include<stdio.h>
int main(){
int num,sum,rem,first_digit;
printf("enter number:");
scanf("%d",&num);
int last_digit=num%10;
while(num>0){
	rem=num%10;
	num=num/10;
	first_digit=rem;
	
}
sum= first_digit+last_digit;
printf("addition  is : %d",sum);
return 0;
}
	
	
