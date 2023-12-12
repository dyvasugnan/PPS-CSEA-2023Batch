#include<stdio.h>
int main()
{

int sub1,sub2,sub3,sub4,sub5,sub6,sum,avg;
printf("enter marks of 6 subjects:");
scanf("%d %d %d %d %d %d ", &sub1,&sub2,&sub3,&sub4,&sub5,&sub6);
sum=sub1+sub2+sub3+sub4+sub5+sub6;
printf("total=%d",sum);
avg=sum/6;
printf("avg is %d",avg);
if(avg>90)
  printf("A");
else
 if(avg>=80&&avg<90)
       printf("B");
   
else
 if(avg>=70&&avg<80)
       printf("C");
    

else
 if(avg>=60&&avg<70)
       printf("D");

else
 printf("Fail");

return 0;
} 











































