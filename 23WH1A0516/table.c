#include<stdio.h>
int main(){
int num,i;
printf("enter number:");
scanf("%d",&num);
int product;
for(i=1;i<=10;i++){
product=num*i;
printf("%d*%d=%d\n",num,i,product);
}
return 0;
}
