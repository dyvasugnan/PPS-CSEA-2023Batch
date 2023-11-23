//this program is to display sum and avg of 3 subjects
#include<stdio.h>
int main(){
int sub1,sub2,sub3,sum;
float avg;
printf("enter the numbers\n");
scanf("%d%d%d",&sub1,&sub2,&sub3);
sum=sub1+sub2+sub3;
avg=(sub1+sub2+sub3)/3.00;
printf("sum of 3 subjects=%d\navg of 3 subjects=%.2f",sum,avg);
return 0;
}
