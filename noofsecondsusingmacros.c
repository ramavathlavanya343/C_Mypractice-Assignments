/*
Name:
Date:
Description:Write a Program to calculate number of seconds in a given year using MACRO. 
Sample Input:
Sample Output:
*/

#include <stdio.h>

#define SECONDS_IN_YEAR(n) n*3153600

int main()
{
    int year;

    printf("Enter a year:");

    scanf("%d",&year);

    printf("Seconds in the year : %d\n",SECONDS_IN_YEAR(year));
    return 0;

}



















#if 0
#include <stdio.h>

// Macro to determine if a year is a leap year
#define IS_LEAP_YEAR(year) (((year) % 4 == 0 && (year) % 100 != 0) || (year) % 400 == 0)

// Macro to calculate the number of seconds in a year
#define SECONDS_IN_YEAR(year) (IS_LEAP_YEAR(year) ? 366 * 24 * 60 * 60 : 365 * 24 * 60 * 60)

int main() {

    int year;

    // Input the year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Calculate the number of seconds in the year
    long long seconds = SECONDS_IN_YEAR(year);

    // Output the result
    printf("Number of seconds in year %d: %lld\n", year, seconds);

    return 0;
}
#endif
