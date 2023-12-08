// this program is about sum of factors of a square
#include<stdio.h>
int factors_sum(int);
int main(){
	int num,f;
	printf("enter your num:");
	scanf("%d",&num);
	f=factors_sum(num); 
	printf("%d",f);
   }
int factors_sum(int num){

	int i,sum=0;
	for(i=1;i<=num;i++){
   		if(num%i==0){
   		
   			sum=sum+(i*i);
   }
}
   			return sum;
	   }
   
