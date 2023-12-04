// this program is about collatz sequence
#include<stdio.h>
void  collatz_seq(int);
	int main(){
		int num,collatz;
		printf("enter a num");
		scanf("%d",&num);
		printf("%d",num);
		collatz_seq(num);
	}
		void collatz_seq(int num){
			
		    while(num>1){
			if(num%2==0){
			
				num=num/2;
			printf("%4d",num);
		}
			else if(num%2!=0){
			
				num = (num*3)+ 1;
			printf("%4d",num);
		}
				
			}
		}
	
