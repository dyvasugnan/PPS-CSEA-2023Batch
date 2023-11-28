/*
*******
*     *
*     *
*******
*/

#include<stdio.h>
int main()
{
	int i,j,num;
	scanf("%d",&num);
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){
			if(i==0||i==num-1||j==0||j==num-1){
				printf("*");	
			}
			else
				printf(" ");
		}
		printf("\n");
	}
}
