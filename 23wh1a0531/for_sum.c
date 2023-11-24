//sum of n natural numbers
#include<stdio.h>
int main(){
int num;
int sum=0;
printf("enter any number");
scanf("%d",&num);
for(int i=1;i<=num;i++){
sum=sum+i;
}
printf("sum of %d natural numbers is %d",num,sum);
return 0;
}

