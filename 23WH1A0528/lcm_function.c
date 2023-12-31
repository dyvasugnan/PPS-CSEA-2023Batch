//to find out lcm of two numbers
#include<stdio.h>
int lcm(int, int, int);
int main(){
	int num1,num2,max;
	printf("enter the numbers: ");
	scanf("%d%d",&num1,&num2);
	max = (num1>num2) ? num1:num2;
int result = lcm(num1,num2);
printf("%d",result);
return 0;
}
int lcm(int num1, int num2,int max){
    int i,lcm;
	while(1){
		if(max%num1==0 && max%num2==0){
	        lcm = max;	    
	   break;
		}
	}
	return lcm;
}
