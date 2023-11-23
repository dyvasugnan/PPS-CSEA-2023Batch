//this program is to display the give number in reverse order
#include<stdio.h>
int main(){
int num1,num2;
printf("give any 2 numbers");
scanf("%d%d",num1,num2);
printf("before swapping;num1=%d num2=%d",num1,num2);
int temp;
temp=num1;
num1=num2;
num2=temp;
printf("after swapping;num1=%d num2=%d",num1,num2);
return 0;
}
