#include<stdio.h>
#include<math.h>
int main(){
	int num,i,power,sum=0;
	printf("enter number :");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		power=pow(i,i);
		sum=sum+power;
	}
	printf("%d",sum);
	return 0;
}
