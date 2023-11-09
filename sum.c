#include<stdio.h>
int main(){
int sum=0,num1,num2;
printf("Enter two numbers");
scanf("%d%d",&num1,&num2);
for(int i=0;i<1000;i++){
if(i%num1==0||i%num2==0)
		sum=i+sum;}
printf("%d",sum);
return 0;
}
