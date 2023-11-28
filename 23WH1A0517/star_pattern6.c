#include<stdio.h>
int main()
{
	int j,k,num;
	float i;
	scanf("%d",&num);
	for(i=0;i<num;i++){
		for(j=0;j<2*(num-i)-1;j++){
			printf(" ");
		}
		for(k=0;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
}
