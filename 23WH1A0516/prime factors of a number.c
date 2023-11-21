#include<stdio.h>
int main(){
	int num,i,j,max;
	printf("enter number :");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		if(num%i==0){
		int count=0;
			for(j=1;j<=i;j++){
				if(i%j==0){
					count++;
				}

			}
		if(count==2){
			printf("%4d",i);
			max=i;
				}
		}
	}
	printf("\nlargest prime factor is %d",max);
	return 0;
}
