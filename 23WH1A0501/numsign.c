#include<stdio.h>
int main(){
int num;
printf("Enter any integer: ");
scanf("%d",&num);
if(num>=0){
printf("The given number, %d, is positive",num);
}
else{
printf("The given number, %d, is negative",num);
}
return 0;
}
