/*
Name:
Date:
Description:goodarray
Sample Input:
Sample Output:
*/

#include <stdio.h>
#include <stdbool.h>

// Function to check if an array is a good array
bool isGoodArray(int arr[], int n) {
    // Check if all elements are positive
    for (int i = 0; i < n; i++) {
        if (arr[i] <= 0) {
            return false; // Not a good array
        }
    }

    // Check for duplicates
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return false; // Not a good array
            }
        }
    }
    
    return true; // Good array
}

int main() {

    int arr[] = {1, 2, 4, 4, 5}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isGoodArray(arr, n)) {
        printf("The array is a good array.\n");
    } else {
        printf("The array is not a good array.\n");
    }

    return 0;
}

