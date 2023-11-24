// largest of 3 numbers
#include<stdio.h>
int main(){
int num1,num2,num3,temp,result;
printf("enter 3 numbers");
scanf("%d%d%d",&num1,&num2,&num3);
temp=(num1>num2)?num1:num2;
result=(temp>num3)?temp:num3;
printf("the largest number is %d",result);
return 0;
}

