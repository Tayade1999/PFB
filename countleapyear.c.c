#include <stdio.h>

int isLeapYear(int year) {
    if (year % 400 == 0) {
        return 1;  // Divisible by 400, so it's a leap year
    } else if (year % 100 == 0) {
        return 0;  // Divisible by 100 but not by 400, so it's not a leap year
    } else if (year % 4 == 0) {
        return 1;  // Divisible by 4 but not by 100, so it's a leap year
    } else {
        return 0;  // Not divisible by 4, so it's not a leap year
    }
}

int countLeapYears(int startYear, int endYear) {
    int count = 0;

    for (int year = startYear; year <= endYear; year++) {
        if (isLeapYear(year)) {
            count++;
        }
    }

    return count;
}

int main() {
    int startYear, endYear;

    printf("Enter the starting year: ");
    scanf("%d", &startYear);

    printf("Enter the ending year: ");
    scanf("%d", &endYear);

    int leapYears = countLeapYears(startYear, endYear);

    printf("The number of leap years between %d and %d is %d.\n", startYear, endYear, leapYears);

    return 0;
}

