//this is to display the reverse of a given number using while loop
#include<stdio.h>
int main(){
int num,reverse=0,rem;
printf("Enter any number");
scanf("%d",&num);
while(num>0){
      rem=num%10;
      reverse=reverse*10+rem;
      num=num/10;
}
printf("%d",reverse);
return 0;
}
