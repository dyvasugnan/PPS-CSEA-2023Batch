//displaying  3  numbers.Which is largest 
#include<stdio.h>
int main (){
int n1,n2,n3,g1,g2;
printf("enter any number");
scanf("%d%d%d",&n1,&n2,&n3);
g1=(n1>n2?n1:n2);
g2=(g1>n3?g1:n3);
printf("greatest number is:%d",g2);
return 0;
}