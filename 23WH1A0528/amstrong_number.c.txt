// to find out whether the given number is amstrong number or not
#include<stdio.h>
int main(){
  int num,rem,temp,sum=0;
printf("enter a number: ");
scanf("%d",&num);
 temp = num;
while(num>0){
  rem = num%10;
  sum = sum+rem*rem*rem;
  num = num/10;
}
if(temp==sum)
  printf("%d is an armstrong number",temp);
else
  printf("%d is not an amstrong number",temp);
return 0;
}
