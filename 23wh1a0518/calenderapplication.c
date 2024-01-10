#calender application
#include <stdio.h>

int isLeapYear(int year) {
    return (year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0));
}

int getDayOfWeek(int day, int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;
    int dayOfWeek = (day + 13 * (month + 1) / 5 + k + k / 4 + j / 4 - 2 * j) % 7;
    return (dayOfWeek + 6) % 7; // Adjust for Sunday being the first day of the week
}

void printCalendar(int date ,int month, int year) {
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year)) {
        daysInMonth[2] = 29;
    }

    int dayOfWeek = getDayOfWeek(1, month, year);
    printf(" Sun Mon Tue Wed Thu Fri Sat\n");

    for (int i = 0; i < dayOfWeek; i++) {
        printf("    ");
    }

    for (int day = 1; day <= daysInMonth[month]; day++) {
        printf("%4d", day);
        if (++dayOfWeek > 6) {
            printf("\n");
            dayOfWeek = 0;
        }
    }

    printf("\n");
}

int main() {
    int date, month, year;
    printf("Enter date,month and year (dd MM YYYY): ");
    scanf("%d %d %d", &date, &month, &year);

    if (month < 1 || month > 12 || year < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("\n");
    printCalendar(date,month, year);
    int result;
    for(int i=0;i<date;i++){
        result = getDayOfWeek(date,month,year);
    }
    printf("%d is a ",date);
    switch(result){
        case 1:
        printf("monday");
        break;
        case 2:
        printf("tuesday");
        break;
        case 3:
        printf("wednesday");
        break;
        case 4:
        printf("thursday");
        break;
        case 5:
        printf("friday");
        break;
        case 6:
        printf("saturday");
        break;
        default:
        printf("sunday");
    }
    return 0;
}




OUTPUT:
Enter date,month and year (dd MM YYYY): 06 06 2024
Sun Mon Tue Wed Thu Fri Sat
                          1
  2   3   4   5   6   7   8
  9  10  11  12  13  14  15
 16  17  18  19  20  21  22
 23  24  25  26  27  28  29
 30
6 is a thursday
