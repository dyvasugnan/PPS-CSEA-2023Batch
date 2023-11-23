//6 subject marks
#include<stdio.h>
int main (){
int s1,s2,s3,s4,s5,s6,avg,total;
printf("Enter any subject marks");
scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
total=s1+s2+s3+s4+s5+s6;
avg=total/6;
if(avg>90)
printf("A+");
else if(avg>=80&&avg<90)
printf("A");
else if (avg>=70&&avg<80)
printf("B+");
else if (avg>=60&&avg<70)
printf("B");
else if (avg>=50&&avg<60)
printf("C");
else
printf("Fail");
return 0;
}
