#include<stdio.h>
int main(){
	int num;
	printf("enter number");
	scanf("%d",&num);
	printf("%d",num);
	while(num>1){
		if(num%2==0){
			num=num/2;
			
		}
		else if(num%2!=0){
			num=(3*num)+1;
		}
		printf("%4d",num);
	}
	return 0;
}
