/*
Name:
Date:
Description:Remove even integers from array
Sample Input:7 1 2 4 5 10 6 3 
Sample Output:1 5 3
*/


#include <stdio.h>

// Function to remove even integers from the array
int removeEvens(int arr[], int size) {

    int j = 0; // Index for the new array without evens

    // Traverse through the array
    for (int i = 0; i < size; i++) {
        // Check if the element is odd
        if (arr[i] % 2 != 0) {
            arr[j++] = arr[i]; // Move odd elements to the front of the array
        }
    }
    
    return j; // Return the size of the new array without evens
   // printf("%d",arr[j]);
   // size=j;
}

int main() {

    int arr[100]; // Array to hold up to 100 integers
    int n; // Number of elements in the array

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Call the function to remove even integers
    n = removeEvens(arr, n);
   // removeEvens(arr,n);

    // Print the array after removing evens
    printf("Array after removing evens: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
