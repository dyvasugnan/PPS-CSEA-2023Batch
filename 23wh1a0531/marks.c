// read and display sub marks and avg
#include <stdio.h>
int main(){
int sub1,sub2,sub3,sum;
float avg;
printf("enter subject marks\n");
scanf("%d%d%d",&sub1,&sub2,&sub3);
  sum= sub1+sub2+sub3;
  avg= sum/3.0 ;
printf("Sum of marks=%d\nAverage of marks=%.2f",sum,avg);
return 0;
}
