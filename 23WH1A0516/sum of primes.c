#include<stdio.h>
int main(){
	int range,i,j,count,sum=0;
	printf("enter number :");
	scanf("%d",&range);
	for(i=1;i<=range;i++){
			count=0;
		for(j=1;j<=i;j++){
		
			if(i%j==0){
				count++;
			}
			
		}
		if(count==2){
			sum=sum+i;
			printf("%4d",i);
		}
	}
	printf("\nsum of primes in given range is %d",sum);
}
