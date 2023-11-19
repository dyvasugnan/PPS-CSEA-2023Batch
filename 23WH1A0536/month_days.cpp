//To read the month number and display the number of days in that month.
#include<stdio.h>
int main(){
    int month;
    printf("Enter the month number(1-12) : ")
    scanf("%d", &month);
    switch(month){
                  case 1: 
                       printf("Total no of days = 31\n");
                       break;
                  case 2: 
                       printf("Total no of days = 28\n");
                       break;
                  case 3:
                       printf("Total no of days = 31\n");
                       break;
                  case 4: 
                       printf("Total no of days = 30\n");
                       break;
                  case 5: 
                       printf("Total no of days = 31\n");
                       break;
                  case 6: 
                       printf("Total no of days = 30\n");
                       break;
                  case 7: 
                       printf("Total no of days = 31\n");
                       break;
                  case 8: 
                       printf("Total no of days = 31\n");
                       break;
                  case 9: 
                       printf("Total no of days = 30\n");
                       break;
                  case 10: 
                       printf("Total no of days = 31\n");
                       break;
                  case 11: 
                       printf("Total no of days = 30\n");
                       break;
                  case 12: 
                       printf("Total no of days = 31\n");
                       break;
                  default :
                          printf("Out of range");
                          }
    printf("Out of switch");
    return 0;
}
