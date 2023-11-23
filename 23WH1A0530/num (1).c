//declare 2 variables by num1,num2 by reading
#include<stdio.h>
int main (){
int n1,n2,largest;
printf("enter any number");
scanf("%d%d",&n1,&n2);
largest=(n1>n2)?n1:n2;
printf("largest number is:%d",largest);
return 0;
}