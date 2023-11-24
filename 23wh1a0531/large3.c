// large of 3 using simple if
#include<stdio.h>
int main(){
int num1,num2,num3;
printf("enter 3 numbers");
scanf("%d%d%d",&num1,&num2,&num3);
if(num1>num2&&num1>num3){
printf("1st number is largest");}
if(num2>num1&&num2>>num3){
printf("2nd number is largest");}
if(num3>num1&&num3>num2){
printf("3rd number is the largest");}
return 0;
}
 

