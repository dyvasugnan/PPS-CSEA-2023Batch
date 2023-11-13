#include<stdio.h>
int main(){
int num,revnum;
printf("Enter a three digit number: ");
scanf("%d",&num);
revnum=100*(num%10)+10*(num/10-10*(num/100))+num/100;
printf("The given number, %d, when reversed, is, %d",num,revnum);
return 0;
}
