//sum of natural numbers less than 1000 which are either multiples of 3 or 5
#include<stdio.h>
  int main(){
  	int num=1,sum=0;
  	   for(num=1;num<1000;num++){
		 
  	       if(num%3==0 || num%5==0)
  	          sum += num;
  	    }
  	printf("%d",sum);
  return 0;	
	            
  }
