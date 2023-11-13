#include<stdio.h>
int main(){
int num;
printf("Enter a number: ");
scanf("%d",&num);
if(num%5==0&&num%7!=0){
printf("The given number, %d is divisible by 5 and not by 7",num);
}
else{
printf("The given number, %d is not 'divisible by 5 and not by 7'",num);
}
return 0;
}
