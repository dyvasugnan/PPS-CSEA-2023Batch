// largesst of 3 numbers using nested if else
#include<stdio.h>
int main(){
int num1,num2,num3;
printf("enter 3 numbers");
scanf("%d%d%d",&num1,&num2,&num3);
if(num1>num2){
if(num1>num3){
printf("number 1 is greatest");}
}
if(num2>num1){
if(num2>num3){
printf("number 2 is the greatest");}
}
if(num3>num1){
if(num3>num2){
printf("the 3rd number is the greatest");}
}
return 0;
}

