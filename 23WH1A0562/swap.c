//Program to swap the first and last digit of a number
#include<stdio.h>
int main()
 {
  int number;
  printf("Enter a number: ");
  scanf("%d",&number);
  int N,last_digit,first_digit,rem;
  N=number;
  int a=N;
  last_digit=number%10;
  while(N>0)
  {
    rem=N%10;
    N=N/10; 
    if(N==0)
    first_digit=rem;
  }
  int temp_var=last_digit;
  last_digit=first_digit;
  first_digit=temp_var;
  
  return 0;
 } 
 
