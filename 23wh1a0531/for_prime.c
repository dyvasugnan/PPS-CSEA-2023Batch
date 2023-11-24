//is the given number a prime number or not
#include<stdio.h>
int main(){
int num,count=0;
printf("enter any number");
scanf("%d",&num);
for(int i=1;i<=num;i++){
if(num%i==0)
count++;
}
if(count==2){
printf("it is a prime number");
}
else{
printf("it is not a prime number");
}
return 0;
}
