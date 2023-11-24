//perfect number using for loop- perfect no.= sum of factors of a number = number*2
#include<stdio.h>
int main(){
int num,fact=1,sum=0;
printf("enter any number");
scanf("%d",&num);
while(fact<=num){
if(num%fact==0){
sum=sum+fact;
fact++;
}
else
fact++;
}
if(sum==num*2)
printf("the number is a perfect number");
else
printf("the number is not a perfect number");
return 0;
}
