#include <stdio.h>

int main() {
    int monthNumber;
    
    printf("Input month number: ");
    scanf("%d", &monthNumber);

    switch (monthNumber) {
        case 1: // January
            printf("Total number of days = 31\n");
            break;
        case 2: // February
            printf("Total number of days = 28 or 29 (leap year)\n");
            break;
        case 3: // March
            printf("Total number of days = 31\n");
            break;
        case 4: // April
            printf("Total number of days = 30\n");
            break;
        case 5: // May
            printf("Total number of days = 31\n");
            break;
        case 6: // June
            printf("Total number of days = 30\n");
            break;
        case 7: // July
            printf("Total number of days = 31\n");
            break;
        case 8: // August
            printf("Total number of days = 31\n");
            break;
        case 9: // September
            printf("Total number of days = 30\n");
            break;
        case 10: // October
            printf("Total number of days = 31\n");
            break;
        case 11: // November
            printf("Total number of days = 30\n");
            break;
        case 12: // December
            printf("Total number of days = 31\n");
            break;
        default:
            printf("Invalid month number entered.\n");
            break;
    }

    return 0;
}