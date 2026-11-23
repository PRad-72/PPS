#include <stdio.h>
#include <time.h>

int isLeapYear(int year) {
    return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}

int getDaysInMonth(int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 1 && isLeapYear(year)) { 
        return 29;
    }
    return daysInMonth[month];
}


int getStartDayOfMonth(int year, int month) {
    struct tm date = {0};
    date.tm_year = year - 1900; 
    date.tm_mon = month;        
    date.tm_mday = 1;        
    date.tm_isdst = -1;          

    mktime(&date);
    return date.tm_wday;
}

int main() {
    int year;
    const char *months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    printf("Enter the year: ");
    if (scanf("%d", &year) != 1 || year <= 0) {
        printf("Please enter a valid positive year.\n");
        return 1;
    }

    printf("\n==================== CALENDAR - %d ====================\n", year);

    for (int month = 0; month < 12; month++) {
        int totalDays = getDaysInMonth(month, year);
        int startDay = getStartDayOfMonth(year, month);

        printf("\n------------ %s %d ------------\n", months[month], year);
        printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

  
        for (int space = 0; space < startDay; space++) {
            printf("     ");
        }

    
        for (int day = 1; day <= totalDays; day++) {
            printf("%3d  ", day);
            if ((startDay + day) % 7 == 0) {
                printf("\n");
            }
        }
        printf("\n");
    }

    return 0;
}
