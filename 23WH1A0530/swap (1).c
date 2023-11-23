//2 numbers interchanging
#include<stdio.h>
int main (){
  int a=23,b=40;
  printf("value of 'a' before swaping%d\n",a);
  printf("value of 'b' before swaping %d\n",b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("value of 'a' after swaping %d\n",a);
  printf("value of 'b' after swaping %d\n",b);
  return 0;
}