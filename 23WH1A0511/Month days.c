#include<stdio.h>
void main(){
    int month;
    printf("enter month number: ");
    scanf("%d",&month);
    switch (month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("total number of days: 31");
            break;
        case 2:
            printf("total number of days: 28");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("total number of days: 30");
            break;
    }
}
