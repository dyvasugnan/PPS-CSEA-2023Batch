//to find power of a given number without using inbuilt function
#include<stdio.h>
int main(){
  int base_number,exponent_number,power=1;
  printf("enter the base number: ");
  scanf("%d",&base_number);
  printf("enter the power to be found: ");
  scanf("%d",&exponent_number);
  for(int i=exponent_number;i>0;i--){
      power=power*base_number;
  }
printf("%d",power);
return 0;
}
