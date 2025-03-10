/*
Name:
Date:
Description:16.WAP to calculate X power y using recursion
Sample Input:
Sample Output:
*/

#include <stdio.h>

// Recursive function to calculate X^y
double power(double x, int y) {

    // Base case: any number to the power of 0 is 1
    if (y == 0) {
        return 1;
    }
    // If y is negative, calculate the power for positive y and take the reciprocal
    if (y < 0) {
        return 1 / power(x, -y);
    }
    // Recursive case
    return x * power(x, y - 1);
}

int main() {

    double x;
    int y;
    
    // Input from the user
    printf("Enter the base (X): ");
    scanf("%lf", &x);
    printf("Enter the exponent (y): ");
    scanf("%d", &y);

    // Calculate X^y using the recursive function
    double result = power(x, y);

    // Print the result
    printf("%lf^%d = %lf\n", x, y, result);

    return 0;
}
