#include<stdio.h>
int main(){
	printf("Enter any number: ");
	int n,i,j,count;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		count=0;
		for(j=1;j<=i;j++)
			if(i%j==0)
				count++;
		if(count==2)
			printf("\n%d",i);
	}
}
