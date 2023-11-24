//factorial using for loop
#include<stdio.h>
int main(){
int num,fact=1;
printf("enter any number");
scanf("%d",&num);
for(int i=1;i<=num;i++){
fact=fact*i;
}
printf("%d",fact);
return 0;
}
