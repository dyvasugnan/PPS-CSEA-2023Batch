#include<stdio.h>
int main(){
int num,firstd,lastd,sum;
printf("enter a number");
scanf("%d",&num);
lastd=num%10;
while(num>=10){
num/=10;
}
firstd=num;
sum=firstd+lastd;
printf("%d",sum);
return 0;
}

