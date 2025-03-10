/*
Name:
Date:
Description:
Sample Input:
Sample Output:
*/

#include <stdio.h>

// Function to print the Hailstone series
void printHailstoneSeries(int n) {

    // Print the initial number
    printf("%d ", n);

    // Continue the series until n becomes 1
    while (n != 1) {
        if (n % 2 == 0) {
            // n is even
            n = n / 2;
        } else {
            // n is odd
            n = 3 * n + 1;
        }
        // Print the current number
        printf("%d ", n);
    }
    printf("\n"); // Print a newline at the end
}

int main() {

    int n;

    // Input the number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check for valid input
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }

    // Print the Hailstone series
    printf("Hailstone series for %d:\n", n);
    printHailstoneSeries(n);

    return 0;
}
