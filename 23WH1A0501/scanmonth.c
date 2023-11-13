#include<stdio.h>
int main(){
int days,mnths,remdays;
printf("Enter no.of days:");
scanf("%d",&days);
mnths=days/30;
remdays=days%30;
printf("No of months: %d \nNo of days remaining:%d",mnths,remdays);
return 0;
}
