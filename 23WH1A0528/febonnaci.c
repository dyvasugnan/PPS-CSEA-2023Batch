//to diplay febonacci sequence
#include<stdio.h>
int main() {
int num,t0=0,t1=1,next;
printf("enter a number");
scanf("%d",&num);
printf("%4d%4d",t0,t1);
for (int i=1; i<=num; i++){
next=t0+t1;
printf("%4d",next);
t0=t1;
t1=next;
}
return 0;
}
