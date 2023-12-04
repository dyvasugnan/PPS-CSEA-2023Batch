//tofind out sum and average of marks
#include <stdio.h>
int main() {
int sub1,sub2,sub3;
int sum;
float average;
printf("enter three numbers\n");
scanf("%d%d%d",&sub1,&sub2,&sub3);
sum=sub1+sub2+sub3;
average=(sub1+sub2+sub3)/3.00;
printf("sum of marks=%d\naverage of marks=%.2f",sum,average);
return 0;
}
