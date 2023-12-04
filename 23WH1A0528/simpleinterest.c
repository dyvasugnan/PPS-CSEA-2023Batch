//to find out simple interest
#include <stdio.h>
int main() {
int p,t,r,simpleinterest;
printf("enter three numbers");
scanf("%d%d%d",&p,&t,&r);
simpleinterest=(p*t*r)/100;
printf("simpleinterest=%d",simpleinterest);
return 0;
}
