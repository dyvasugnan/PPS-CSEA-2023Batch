//this is to display whether given number is an armstrong number or not
#include<stdio.h>
int main(){
int num,sum=0,rem;
printf("enter any number");
scanf("%d",&num);
int temp=num;
while(num>0){
         rem=num%10;
         sum=(rem*rem*rem)+sum;
         num=num/10;
}
if(temp==sum){
      printf("the given number is an armstrong number");
}
else{
    printf("the given number is not an armstrong number");
}
return 0;
}
