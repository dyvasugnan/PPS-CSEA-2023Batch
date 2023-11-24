//grades of students using ladder if else
#include<stdio.h>
int main(){
int math,phy,che,sum,avg;
printf("enter MPC marks");
scanf("%d%d%d",&math,&phy,&che);
sum=math+phy+che;
avg=sum/3;
if(avg>=90)
   printf("A+ grade");
else if(avg<90&&avg>=80)
   printf("A grade");
else if(avg<80&&avg>=70)
   printf("B+ grade");
else if(avg<70&&avg>=60)
   printf("B grade");
else if(avg<60&&avg>=50)
   printf("C grade");
else
   printf("F grade");
return 0;
}

