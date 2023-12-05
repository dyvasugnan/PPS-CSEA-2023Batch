// this program is about printing pattern
#include<stdio.h>
void num_pattern(int);
int main(){
	int num;
	printf("enter num");
	scanf("%d",&num);
	num_pattern(num);
	return 0;
}
void num_pattern(int x){
	int i,j;
	for(i=1;i<=x;i++){
		for(j=1;j<=i;j++){
			printf("%4d",j);
	}
	printf("\n");
	}
}


