#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num1,num2;
    float num3,num4;
    scanf("%d %d",&num1,&num2);
    scanf("%f %f",&num3,&num4);
    int sum=num1+num2;
    int diff=num1-num2;
    float Sum=num3+num4;
    float Diff=num3-num4;
    printf("%d %d\n",sum,diff);
    printf("%.1f %.1f",Sum,Diff);
    return 0;
}
