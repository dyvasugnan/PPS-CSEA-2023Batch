/**
 * C program to print number of days in a month using switch case 
 */

#include <stdio.h>

int main()
{
    int month;

    /* Input month number from user */
    printf("Enter month number(1-12): ");
    scanf("%d", &month);

    switch(month)
    {
        case 1: 
            printf("Total number of days = 31 days");
            break;
        case 2: 
            printf("Total number of days = 38 or 29 days");
            break;
        case 3: 
            printf("Total number of days = 31 days");
            break;
        case 4: 
            printf("Total number of days = 30 days");
            break;
        case 5: 
            printf("Total number of days = 31 days");
            break;
        case 6: 
            printf("Total number of days = 30 days");
            break;
        case 7: 
            printf("Total number of days = 31 days");
            break;
        case 8: 
            printf("Total number of days = 31 days");
            break;
        case 9: 
            printf("Total number of days = 30 days");
            break;
        case 10: 
            printf("Total number of days = 31 days");
            break;
        case 11: 
            printf("Total number of days = 30 days");
            break;
        case 12: 
            printf("Total number of days = 31 days");
            break;
        default: 
            printf("Invalid input! Please enter month number between 1-12");

    }

    return 0;
}

