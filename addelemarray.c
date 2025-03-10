/*
Name:
Date:
Description:Print add elements in an array
Sample Input:
Sample Output:
*/

#include <stdio.h>

int main() {

    int n;

    // Prompt user for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];

    // Input elements in the array
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Calculate the sum of all elements
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += array[i];
    }

    // Print the sum
    printf("Sum of all elements: %d\n", sum);

    return 0;
}
