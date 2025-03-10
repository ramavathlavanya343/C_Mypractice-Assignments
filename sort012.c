/*
Name:
Date:
Description:5.write a c program to sort an array of 0s , 1s and 2s without using any 
sorting algorithm 
Sample Input:
Sample Output:
*/

#include <stdio.h>

// Function to sort the array of 0s, 1s and 2s
void sort012(int arr[], int n) {

    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {

	if (arr[mid] == 0) {
	    // Swap arr[low] and arr[mid]
	    int temp = arr[low];
	    arr[low] = arr[mid];
	    arr[mid] = temp;
	    low++;
	    mid++;
	} else if (arr[mid] == 1) {
	    mid++;
	} else if (arr[mid] == 2) {
	    // Swap arr[mid] and arr[high]
	    int temp = arr[mid];
	    arr[mid] = arr[high];
	    arr[high] = temp;
	    high--;
	}
    }
}


// Function to print the array
void printArray(int arr[], int n) {

    for (int i = 0; i < n; i++) {
	printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {

    int n;

    // Ask user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Ask user to input the elements
    printf("Enter the elements (0, 1, 2) of the array: \n");
    for (int i = 0; i < n; i++) {
	scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    printArray(arr, n);

    sort012(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}

