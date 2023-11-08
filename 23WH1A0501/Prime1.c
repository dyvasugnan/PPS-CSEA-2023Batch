#include<stdio.h>
int main(){
	printf("Enter a number: ");
	int num,i;
	char factor='a';
	scanf("%d",&num);
	if(num==0||num==1){
		factor='a';
	}
	else if(num==2||num==3){
		factor='b';
	}
	else{
		for(i=2;i<=num/2;i++){
			if(num%i==0){
				factor='a';
				break;
			}
			else{
				factor='b';
		}
	}
}
	if(factor=='b'){
		printf("The given number, %d, is prime",num);
	}
	else{
		printf("The given number, %d, is not prime",num);
	}
	return 0;
}
