#include<stdio.h>
int main(){
int base,expo,pow=1;
printf("enter base:");
scanf("%d",&base);
printf("enter exponent :");
scanf("%d",&expo);
for(int i=1;i<=expo;i++){
pow=pow*base;



}
printf("power of a number:%d",pow);
return 0;
}
	
