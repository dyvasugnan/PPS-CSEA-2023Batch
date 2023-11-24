//simple intrest
#include <stdio.h>
int main(){
int prin_amt,time,rate_int;
float temp,simp_int;
printf("enter prin_amt,time and rate_int");
scanf("%d%d%d",&prin_amt,&time,&rate_int);
 temp=prin_amt*time*rate_int;
simp_int=temp/100;
printf("the simple intrest is %f",simp_int);
return 0;
}
