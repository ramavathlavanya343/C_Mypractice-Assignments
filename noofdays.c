/*
Name:
Date:
Description:10.Write a C program which find the no. of days in the given month
Sample Input:
Sample Output:
*/


#include <stdio.h>

// Function to determine if a year is a leap year
int is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to find the number of days in a given month
int days_in_month(int month, int year) {

    switch (month) {
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            return 31;
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            return 30;
        case 2:  // February
            if (is_leap_year(year)) {
                return 29;
            } else {
                return 28;
            }
        default:
        return 0; // Invalid month
    }
}

int main() {

    int month, year;

    // Get user input for month and year
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    // Find the number of days in the given month and year
    int days = days_in_month(month, year);

    // Check if the month is valid
    if (days == 0) {
        printf("Invalid month entered.\n");
    } else {
        printf("Number of days in month %d of year %d is: %d\n", month, year, days);
    }

    return 0;
}
