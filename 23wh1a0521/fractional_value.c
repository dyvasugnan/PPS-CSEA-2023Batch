#include<stdio.h>
#include<math.h>
void main(){
	int x,n,sign=1;
	printf("enter the number and power: ");
	scanf("%d%d",&x,&n);
	float res=1;
	for(int i=1;i<=n;i++){
		sign=sign*-1;
		res=res+sign*(pow(x,i)/(2*i));
	}
	printf("%.3f",res);
}
