//if all the natural numbers below 10 that are multiples of 3 or 5,we get 3,5,6,9.the sum of these are 23.
//fin the sum of all the multiples of 3 or 5 below 1000
#include<stdio.h>
int main(){
int i,sum=0;
 for(i=1;i<=1000;i++){
  if(i%3==0||i%5==0)
  sum=sum+i;
  }
printf("sum of the multiples of 3 or 5 below 1000=%d",sum);
return 0;
}
