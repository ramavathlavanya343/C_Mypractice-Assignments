/*
Name:
Date:
Description:Sum of oddnatural numbers
Sample Input:
Sample Output:
*/


#include <stdio.h>

// Function to find the sum of n odd natural numbers and display them
int sumOfOddNaturalNumbers(int n) {
    
    int sum = 0;
    int count = 0;
    int num = 1; // Starting from the first odd natural number
    
    printf("First %d odd natural numbers:\n", n);
    while (count < n) {
        printf("%d ", num);
        sum = sum + num;
        num = num + 2;      // Increment to the next odd number
        count++;
    }
    printf("\n");
    
    return sum;
}


int main() {

    int n;

    // Input the value of n from user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Validate input (n should be a positive integer)
    if (n <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    // Call function to find the sum of n odd natural numbers and display them
    int sum = sumOfOddNaturalNumbers(n);

    // Output the sum
    printf("Sum of the first %d odd natural numbers: %d\n", n, sum);

    return 0;
}
