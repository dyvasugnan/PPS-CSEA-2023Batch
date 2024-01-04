#include<stdio.h>
int main(){
	int t0=0,t1=2,nexterm,n;
	printf("enter number");
	scanf("%d",&n);
	printf("%4d%4d\n",t0,t1);
		for(int i=1;i<=n;i++){
	if(i%2==0){
			nexterm=t0+t1;}
	printf("%d\n",nexterm);
t0=t1;
	t1=nexterm;
}
return 0;
}

