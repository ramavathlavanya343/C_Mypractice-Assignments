/*
Name:
Date:
Description:. Using macro to find Number of seconds in the year
Sample Input:
Sample Output:
*/

#include <stdio.h>

// Define macros to calculate the number of seconds in a non-leap year and a leap year
#define SECONDS_IN_A_MINUTE 60
#define MINUTES_IN_AN_HOUR  60
#define HOURS_IN_A_DAY      24
#define DAYS_IN_A_NON_LEAP_YEAR 365
#define DAYS_IN_A_LEAP_YEAR    366

#define SECONDS_IN_A_NON_LEAP_YEAR (DAYS_IN_A_NON_LEAP_YEAR * HOURS_IN_A_DAY * MINUTES_IN_AN_HOUR * SECONDS_IN_A_MINUTE)
#define SECONDS_IN_A_LEAP_YEAR (DAYS_IN_A_LEAP_YEAR * HOURS_IN_A_DAY * MINUTES_IN_AN_HOUR * SECONDS_IN_A_MINUTE)

int main() {
    // Print the number of seconds in a non-leap year and a leap year
    printf("Number of seconds in a non-leap year: %d\n", SECONDS_IN_A_NON_LEAP_YEAR);
    printf("Number of seconds in a leap year: %d\n", SECONDS_IN_A_LEAP_YEAR);

    return 0;
}
