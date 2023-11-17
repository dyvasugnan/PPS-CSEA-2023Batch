// this program is to find the ower of function using loop
#include<stdio.h>
int main(){
int i,power,base;
printf("enter any base");
scanf("%d",&base);
printf("enter power");
scanf("%d",&power);
int result=1;
for(i=1;i<=power;i++)
  {
  result=result*base;
  }
  printf("%d",result);
 return 0;
}
  
  
   

