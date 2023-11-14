#include<stdio.h>
int main(){
int month;
printf("enter any month number(1-12):");
scanf("%d",&month);
switch(month){
case 1: case 3: case 5: case 7: case 8: case 10: case 12:
       printf("month contains 31 days");
           break;
case 4: case 6: case 9: case 11:
    printf("month contains 30 days");
          break;
 case 2:
     printf("month contains 28 or 29 days");
          break;
     default:
        printf("invalid month number");
}
  return 0;
}
