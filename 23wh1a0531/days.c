// to display number of days as months and days
#include <stdio.h>
int main(){
int days,months,rem_days;
printf("enter number of days");
scanf("%d",&days);
 months=days/30;
 rem_days=days%30;
printf("%dmonths\n%ddays",months,rem_days);
return 0;
}
