/*this programme is to find largest of three nums*/
#include<stdio.h>
int main() {
            int num1,num2,num3,largest1,largest2,largest;
            printf("give three numbers");
            scanf("%d%d%d",&num1,&num2,&num3);
            largest1 =(num1>num2)? num1:num2;
            largest2= (num1>num3) ? num1:num3;
            largest= (largest1>largest2)?largest1:largest2;
            printf("largest n.o = %d",largest);
 return 0;
}
