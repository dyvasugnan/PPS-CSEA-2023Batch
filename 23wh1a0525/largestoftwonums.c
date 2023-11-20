/*this programme is to find largest of two nums*/
#include<stdio.h>
int main() {
            int num1,num2,result;
           printf("give two nums");
           scanf("%d%d",&num1,&num2);
          result = (num1>num2)? num1:num2;
         printf("largest n.o = %d",result);
     return 0;
}
