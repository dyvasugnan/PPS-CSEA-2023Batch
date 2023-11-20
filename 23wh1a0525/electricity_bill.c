#include<stdio.h>
int main(){
            int units;
            float    cost1,cost2,cost3,cost4,cost5;
             printf("give no.of units consumed");
             scanf("%d",&units);
            cost1=units*0.90;
            cost2=units*1.20;
            cost3=units*1.60;
            cost4=units*2;
            cost5=(units*5)+(units*1.5);
            if (units<=99)
                printf("%f",cost1);
            else if (units>=100&&units<=199)
                 printf("%f",cost2);
            else if (units>=200&&units<=399)
                 printf("%f",cost3);
               else if (units<=400)
                 printf("%f",cost4);
             else if (units>600)
                  printf("%f",cost5);
             else
                   printf("not defined");
return 0;
}

