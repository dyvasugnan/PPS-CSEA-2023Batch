#include<stdio.h>
int main(){
	int n1=1,n2=2,temp,sum=0;
	while(n1<=4000000){
	
		
		if(n1%2==0){
			sum=sum+n1;
		}
		temp=n1+n2;
		n1=n2;
		n2=temp;
	}
	printf("%d",sum);
	return 0;
}
