#include<stdio.h>
bool arm(int);
main(){
	int num;
	printf("enter any no");
	scanf("%d",&num);
	bool ans=arm(num);
	if(ans==1)
	printf("armstrong");
	else
	printf("not armstrong");
}
bool arm(int num){
	int sum=0;
	int rem;
	int temp=num;
	while(num>0){
	rem=num%10;
	sum=sum+rem*rem*rem;
	num=num/10;
}
if(temp==sum)
return 1;
else
return 0;
}
