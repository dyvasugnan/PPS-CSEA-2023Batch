#include<stdio.h>
int main(){
int num;
printf("Enter a number: ");
scanf("%d",&num);
if(num%15==0){
printf("The given number, %d is divisible by both 3 and 5",num);
}
else{
printf("The given number,%d is not 'divisible by both 3 and 5",num);
}
return 0;
}
