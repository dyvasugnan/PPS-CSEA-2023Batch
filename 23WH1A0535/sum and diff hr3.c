#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n1, n2, sum, difference;
    float  num1, num2, sum1, diff;
    scanf("%d %d %f %f",&n1,&n2,&num1,&num2);
    sum = n1 + n2;
    difference = n1 - n2;
    sum1 = num1 + num2;
    diff = num1 - num2;
    printf("%d %d\n%.1f %.1f",sum,difference,sum1,diff);
    
    return 0;
}
