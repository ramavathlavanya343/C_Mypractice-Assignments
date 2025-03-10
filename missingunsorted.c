/*
Name: Find Smallest Missing Positive Number
Date: 2024-08-27
Description: This program finds the smallest positive number missing from an unsorted array.
Sample Input: 
Enter the number of elements: 6
Enter the elements: 3 4 -1 1 2 5
Sample Output:
The smallest missing positive number is: 6
*/

#include <stdio.h>
#include <stdlib.h>


int findSmallestMissingPositive(int arr[], int n) {

    int present[n + 1];  // Auxiliary array to track presence of numbers

    // Initialize all elements of present[] to 0
    for (int i = 0; i <= n; i++) {
        present[i] = 0;
    }

    // Mark the elements present in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] <= n) {
            present[arr[i]] = 1;
        }
    }

    // Find the first element that is not marked as present
    for (int i = 1; i <= n; i++) {
        if (present[i] == 0) {
            return i;
        }
    }

    // If all elements from 1 to n are present, return n+1
    return n + 1;
}

int main() {

    int arr[100], n, i;

    // Getting the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Getting the elements of the array
    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Finding and printing the smallest missing positive number
    int result = findSmallestMissingPositive(arr, n);
    printf("The smallest missing positive number is: %d\n", result);

    return 0;
}

