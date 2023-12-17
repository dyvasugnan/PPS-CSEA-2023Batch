//Smallest postitive number evenly divisibe by all numbers from 1 to 20
#include<stdio.h>
#include<stdbool.h>
int main(){
	int num = 1000;
	
	while(true){
		int count = 0;
		for(int i = 1 ; i <= 20 ; i++)
			if(num % i != 0){
				count++;
			}
				
		if (count == 0){
			printf("%d" , num);
			break;
		}
		num++;
	}
	return 0;
	
}
