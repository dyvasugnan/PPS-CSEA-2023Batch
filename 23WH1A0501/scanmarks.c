#include<stdio.h>
int main(){
float math,phy,chem,sum,avg;
printf("Math score:");
scanf("%f",&math);
printf("Physics score:");
scanf("%f",&phy);
printf("Chemistry score:");
scanf("%f",&chem);
sum=math+phy+chem;
avg=sum/3;
printf("Sum of marks: %.0f\nAvg of marks: %.2f",sum,avg);
return 0;
}
