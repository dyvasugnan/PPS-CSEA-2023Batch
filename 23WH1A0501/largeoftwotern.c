#include<stdio.h>
int main(){
printf("Enter two numbers: ");
int num1,num2;
scanf("%d%d",&num1,&num2);
int largest=(num1>num2)?num1:num2;
printf("%d is the larger one among the given values.",largest);
return 0;
}
