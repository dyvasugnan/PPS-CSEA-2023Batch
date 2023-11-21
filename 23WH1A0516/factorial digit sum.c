#include<stdio.h>
int main(){
	int num,i,fact=1,rem,sum=0;
	printf("enter number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		fact=fact*i;
	}
	printf("%d\n",fact);
	while(fact>0){
		rem=fact%10;
		sum=sum+rem;
		fact=fact/10;
		
	}
	printf("%d",sum);
	return 0;
}
