/*this programme is find grades of students based on avg marks*/
#include<stdio.h>
int main(){
           int sub1,sub2,sub3,sum,avg;
           printf("give 3 nums");
           scanf("%d%d%d",&sub1,&sub2,&sub3);
           sum = sub1+sub2+sub3;
           avg = sub1+sub2+sub3/3;
          if (avg>=90)
             printf("A+ GRADE");
          else if (avg>=80 &&avg<90)
             printf("A GRADE");
          else if (avg>=70 && avg<80)
             printf("B+ GRADE");
          else if (avg>=60 && avg<70)
             printf("B GRADE");
          else if (avg>=50 && avg<60)
              printf("C GRADE");
          else 
              printf("fail");
return 0;
}
