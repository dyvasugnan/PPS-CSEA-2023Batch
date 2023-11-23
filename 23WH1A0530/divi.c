//read int num divisible by 5or7
#include<stdio.h>
int main (){
int num;
printf("enter any number");
scanf("%d",&num);
if(num%5==0&&num%7==0){
  printf("number divisible by 5 and 7");
}
else{
  printf("number is not divisible by 5 and 7");
return 0;
}
}