#include<stdio.h>
int isArmstrong(int);
int main(){
	int num;
	printf("Enter number : ");
	scanf("%d",&num);
	int result = isArmstrong(num);
	if(result == 1){
		printf("the given number is an armstrong number");
	}
	else{
		printf("the given number is not an armstrong number");
	}
}
int isArmstrong(int num){
	int sum=0,rem,temp=num;
	while(num>0){
		rem = num % 10;
		sum = sum + rem*rem*rem;
		num = num / 10;
	}
	if(sum == temp){
		return 1;
	}
	else{
		return 0;
	}
}

