//to find gcd of two numbers using recursion
#include<stdio.h>
int gcd(int,int);
int main(){
    int num1,num2;
    printf("enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    int result = gcd(num1,num2);
        printf("%d",result);
return 0;
}
int gcd(int num1, int num2){
    if(num2>num1)
      return gcd(num2,num1);
   if(num2==0)
      return num1;
   else
      return gcd(num2,num1%num2);
}
