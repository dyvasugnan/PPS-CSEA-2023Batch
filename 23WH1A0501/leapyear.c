#include<stdio.h>
int main(){
printf("Enter a year: ");
int year;
scanf("%d",&year);
if(year%4==0){
printf("%d is a leap year",year);
}
else{
printf("%d is not a leap year",year);
}
return 0;
}