//this program is about sum of first and last digit numbers
#include<stdio.h>
int main(){
int num;
printf("enter a num");
scanf("%d",&num);
int last_digit = num%10;
while((num/10)!=0){
 (num=num/10);
}
printf("%d",num);
printf("sum of first and last digit:%d",last_digit+num);
return 0;
} 
