#include<stdio.h>
void swap(int*,int*);
int main()
 {
   int num1,num2;
   printf("Enter two numbers:\n");
   scanf("%d %d",&num1,&num2);
  
   swap(&num1,&num2);
   printf("After swaping the two numbers:\n");
   printf("num1=%d  num2=%d",num1,num2);
 
 }
  void swap(int* num1,int* num2)
 {
   int temp = *num1;
      *num1 = *num2;
      *num2 = temp;
 }
  
