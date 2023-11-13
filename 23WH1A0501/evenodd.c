#include<stdio.h>
int main(){
printf("Enter a positive integer: ");
int num;
scanf("%d",&num);
if(num%2==0){
printf("The given number, %d, is even",num);
}
else{
printf("The given number,%d, is odd",num);
}
return 0;
}
