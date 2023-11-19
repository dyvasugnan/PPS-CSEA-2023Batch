#include<stdio.h>
int main()
{
    int i,sum =0,sum1=0;
        
     for (i=1; i<10; i++)
    {
     if (i%3 == 0)
          sum += i;
     if (i%5== 0)
         sum += i;
     if (i%15 ==0)
           sum1 += i;
    }
    int x=sum-sum1;
    printf("%d", x);

    int sum2 =0,sum3=0;
     for (i=1; i<100; i++)
    {
     if (i%3 == 0)
          sum2 += i;
     if (i%5== 0)
         sum2 += i;
     if (i%15 ==0)
           sum3 += i;
    }
    int x1=sum2-sum3;
    printf(" \n%d", x1);
    return 0;
}