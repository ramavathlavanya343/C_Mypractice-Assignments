/*
Name:
Date:
Description:
Sample Input:
Sample Output:
*/

#include <stdio.h>

//using recurion
#if 0
int gcd(int a, int b) {

    if (b == 0)
        return a;

    return gcd(b, a % b);
}
#endif

#if 1
// Function to find the GCD of two numbers using the Euclidean algorithm
int gcd(int a, int b) {

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
#endif

int main() {

    int num1, num2;

    // Getting input from the user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

     if (num1 < 0 || num2 < 0) {
        printf("Error: Enter the positive values.\n");
        return 1;  // Exit with an error code
    }

    // Calling the gcd function and displaying the result
    int result = gcd(num1, num2);
    printf("The GCD of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
