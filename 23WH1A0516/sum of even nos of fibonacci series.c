#include<stdio.h>
int main(){
	int i,t1=1,t2=2,next_term,num,sum=0;
	printf("enter number :");
	scanf("%d",&num);
	printf("%4d%4d",t1,t2);
	sum=sum+2;
	for(i=1;i<=num;i++){
		next_term=t1+t2;
		printf("%4d",next_term);
		if(next_term%2==0){
			sum=sum+next_term;
		}
		t1=t2;
		t2=next_term;
		}
		printf("\nsum is %d",sum);
		return 0;
	}
