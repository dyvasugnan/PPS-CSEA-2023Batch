#include<stdio.h>
int main(){
	int num=20,i;
	for(i=1;i<=num;i++){
		if(i%3==0&&i%5!=0){
			printf("FIZZ\n");
		}
		else if(i%3!=0&&i%5==0){
			printf("BUZZ\n");
		}
		else if(i%15==0){
			printf("FIZZBUZZ\n");
		}
		else{
			printf("%d\n",i);
		}
	}
	return 0;
}
