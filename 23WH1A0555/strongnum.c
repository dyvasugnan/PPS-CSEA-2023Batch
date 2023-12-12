//this is a c program to find strong number
#include<stdio.h>
#include<stdbool.h>
bool is_strong(int);
int factorial(int);
 int main()
 {
 int n,i,f=1,rem,sum=0,temp;
 printf("enter any numbers\n");
 scanf("%d",&n);
 bool check= is_strong(n);
 if(check==1)
 {
 printf("strong num");
 }
 else
 {
 printf("not strong num");
 }
 }
 bool  is_strong(int n)
 {
 int t,sum=0,f=1,i,rem,temp;
 temp=n;
 while(n!=0)
 {
 rem=n%10;
 f=f*rem;
 sum=sum++;
 n=n/10;
 } 
 if(sum==temp)
 {
 return 1;
 }
 else
 {
 return 0;
 }
 int factorial(int n)
 {
 int i,fact=1; 
 for(i=1;i<n;i++)
 {
 fact=fact*i;
 }
 return fact;
 }
 }
 
