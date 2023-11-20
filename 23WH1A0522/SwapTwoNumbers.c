//swaping of numbers without temp
#include<stdio.h>
int main(){
  int num1,num2;
  printf("enter any two numbers");
  scanf("%d%d",&num1,&num2);
  printf("value of a before swaping=%d\n",num1);
  printf("value of b before swaping=%d\n",num2);
  num1=num1+num2;
  num2=num1-num2;
  num1=num1-num2;
  printf("value of a after swaping=%d\n",num1);
  printf("value of b after swaping=%d",num2);
return 0;
}
