/*this programme is to find largest of three numbers*/
#include<stdio.h>
int main() {
            int num1,num2,num3;
            printf("give three numbers");
            scanf("%d%d%d",&num1,&num2,&num3);
           if    (num1>num2 && num1>num3)
                printf("num1 is largest");
           if  (num2>num3 && num2>num1)
                printf("num2is largest");
           if (num3>num1 && num3>num2)
                 printf("num3 is largest");
return 0;
}
