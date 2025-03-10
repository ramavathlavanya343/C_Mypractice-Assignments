/*
Name:
Date:
Description:18. Write a Macro set nth bit , clear and biggest of three number
Sample Input:
Sample Output:
*/

#include <stdio.h>

#define SET_BIT(num, n) ((num) | (1U << (n)))
#define CLEAR_BIT(num, n) ((num) & ~(1U << (n)))
#define MAX_OF_THREE(a, b, c) ((a) > (b) ? ((a) > (c) ? (a) : (c)) : ((b) > (c) ? (b) : (c)))

int main() {

    int num = 5;  // Binary: 0101
    int n = 1;

    // Set the nth bit
    int result = SET_BIT(num, n);
    printf("Set bit %d of %d: %d\n", n, num, result);  // Output should be 7 (Binary: 0111)

    // Clear the nth bit
    result = CLEAR_BIT(num, n);
    printf("Clear bit %d of %d: %d\n", n, num, result);  // Output should be 5 (Binary: 0101)

    // Find the biggest of three numbers
    int a = 10, b = 15, c = 12;
    int max = MAX_OF_THREE(a, b, c);
    printf("Biggest of %d, %d, and %d is: %d\n", a, b, c, max);  // Output should be 15

    return 0;
}



