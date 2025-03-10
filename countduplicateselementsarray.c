/*
Name:
Date:
Description:
Sample Input:
Sample Output:
 */

#include <stdio.h>

// Function to count duplicate elements in an array
int countDuplicates(int arr[], int size) {

    int count = 0;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break; // Once a duplicate is found, no need to check further for this element
            }
        }
    }

    return count;
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

    // Call the function to count duplicate elements
    int duplicates = countDuplicates(arr, n);

     // Print the number of duplicate elements or an error message if none are found
    if (duplicates > 0) {
        printf("Total number of duplicate elements: %d\n", duplicates);
    } else {
        printf("No duplicates found.\n");
    }
    return 0;
}
