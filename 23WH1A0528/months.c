//to convert days into months
#include <stdio.h>
int main() {
int days;
int months,remainingdays;
printf("enter one number: ");
scanf("%d",&days);
months= days/30;
remainingdays=days%30;
printf("months=%d\ndays=%d",months,remainingdays);
return 0;
}
