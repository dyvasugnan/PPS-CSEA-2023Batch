//grade of a student
#include<stdio.h>
int main(){
int sub1,sub2,sub3,sub4,sub5,sub6;
printf("enter the marks of six subjects: ");
scanf("%d%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5,&sub6);
int sum=(sub1+sub2+sub3+sub4+sub5+sub6);
int avg=sum/6;
if(avg>=90)
printf("A+");
else if(avg>=80 && avg<90)
printf("A");
else if(avg>=70 && avg<80)
printf("B+");
else if(avg>=60 && avg<70)
printf("B");
else if(avg>=50 && avg<50)
printf("C");
else
printf("fail");
return 0;
}
