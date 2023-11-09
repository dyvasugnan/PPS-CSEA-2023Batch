#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int a,b,sum1,sub1;
float c,d,sum2,sub2;
scanf("%d %d %f %f",&a,&b,&c,&d);
sum1=a+b;
sub1=a-b;    
printf("%d\t",sum1);
printf("%d\n",sub1);
sum2=c+d;
sub2=c-d;    
printf("%.1f\t",sum2);
printf("%.1f",sub2);
    return 0;
}
