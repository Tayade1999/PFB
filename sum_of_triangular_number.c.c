#include <stdio.h>

int calculateTriangularNumber(int n) {
    return (n * (n + 1)) / 2;
}

int main() {
    int n;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int triangularNumber = calculateTriangularNumber(i);
        sum += triangularNumber;
    }

    printf("The sum of triangular numbers up to %d is %d.\n", n, sum);

    return 0;
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

