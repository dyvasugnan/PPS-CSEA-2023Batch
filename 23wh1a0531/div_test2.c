//number divisible by 5 but not 7
#include<stdio.h>
int main(){
int num;
printf("enter number");
scanf("%d",&num);
if (num%5==0&&num%7!=0){
printf("yes the condition is satisfied,the number is divisible by 5 but not 7");}
else{
printf("the number is not satisfying the condition");}
return 0;
}
