#include<stdio.h>
int main(){
	int num,i;
	printf("enter number");
	scanf("%d",&num);
	int sum=0;
	for(i=1;i<num;i++){
		if(num%i==0){
			sum=sum+i;
		}
	}
	if(sum>num){
		printf("it is a smart number");
	}
	else{
		printf("not a smart number");
	}
	return 0;
}
