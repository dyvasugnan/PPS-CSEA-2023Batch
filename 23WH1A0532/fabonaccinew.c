// this program is about the even fibonacci numbers
#include<stdio.h>
int main(){
int i,a=1,b=2,c,n,sum=0;
printf("enter n value");
scanf("%d",&n);
printf("%d\n%d\n",a,b);
sum=sum+2;
for(i=1;i<=n;i++){
	c=a+b;
	if(c%2==0){
	sum=sum+c;
	}
	printf("%d\n",c);
	a=b;
	b=c;
}

printf("%d=sum",sum);
return 0;
}
