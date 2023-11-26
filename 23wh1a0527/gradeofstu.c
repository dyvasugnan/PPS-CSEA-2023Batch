//this is to display the grades of a student
#include<stdio.h>
int main(){
int sub1,sub2,sub3,sub4,sub5,sub6,total,average;
printf("enter the marks of the sudent");
scanf("%d%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5,&sub6);
total = (sub1+sub2+sub3+sub4+sub5+sub6);
average = total/6;
printf("total=%d\naverage=%d",total,average);
if(average>90)
printf("grade A+");
else if(average>=80 && average<90)
printf("grade A");
else if(average>=70 && average<80)
printf("grade B+");
else if(average>=60 && average<70)
printf("grade B");
else if(average>=50 && average<60)
printf("grade C");
else if(average<50)
printf("grade F");
return 0;
}
