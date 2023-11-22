//this is to display the largest number out of 3 numbers using conditional operators
#include<stdio.h>
int main(){
int num1,num2,num3,largest1,largest2,largest3;
printf("enter any 3 numbers");
scanf("%d%d%d",&num1,&num2,&num3);
largest1=(num1>num2)?num1:num2;
largest2=(num1>num3)?num1:num3;
largest3=(largest1>largest2)?largest1:largest2;
printf("largest number is  %d",largest3);
return 0;
}



