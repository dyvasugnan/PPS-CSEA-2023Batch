//this is to display largest of 2 numbers using conditional operators
#include<stdio.h>
int main(){
int num1,num2,result;
printf("enter any 2 numbers");
scanf("%d%d",&num1,&num2);
result:(num1>num2)?printf("num1 is greater than num2"):printf("num2 is greater than num1");
return 0;
}
