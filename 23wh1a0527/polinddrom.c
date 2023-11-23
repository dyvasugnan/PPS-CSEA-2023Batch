//this is to find out the polindrom of the given number
#include<stdio.h>
int main(){
int num,rev=0,rem;
printf("Enter any number");
scanf("%d",&num);
int temp=num;
while(num>0){
      rem=num%10;
      rev=rev*10+rem;
      num=num/10;
}
if(temp==rev){
       printf("given number is polindrom");
}
else{
    printf("given number is not a polindrom");
}
return 0;
}
