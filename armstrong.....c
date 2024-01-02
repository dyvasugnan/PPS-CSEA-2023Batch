#include<stdio.h>
int main(){
int n,rev=0,rem,temp,sum=0;
 printf("enter value of n");

 scanf("%d",&n);
 temp=n;
 while(n>0){
 rem=n%10;
 rev=rev*10+rem;
 n=n/10;
 sum=sum+rem*rem*rem;
 }
 if (temp==sum)
 printf("ok");
 else
 printf("no");
 
 return 0;
 }
 