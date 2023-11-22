//this is to display whether the given year is a leap year or not
#include<stdio.h>
int main(){
int year;
printf("enter any year");
scanf("%d",&year);
if(year%4==0 && year%400!=0 && year%100!=0)
printf("given year is a leap year");
else
printf("given year is not a leap year");
return 0;
}

