#include<stdio.h>
int reverse(int);
main(){
	int num;
	printf("enter");
	scanf("%d",&num);
	int res=reverse(num);
	printf("%d",res);
	}
int reverse(int num){
	int rev=0,rem;
	int temp=num;
while(num>0){
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
}
return rev;}
