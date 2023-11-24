//display a 3 digit number in reverse order
#include <stdio.h>
int main(){
int num,fd,sd,ld,temp;
printf("enter the number");
scanf("%d",&num);
 fd=num/100;
temp=num/10;
 sd=temp%10;
 ld=num%10;
printf("%d %d %d",ld,sd,fd);
return 0;
}

