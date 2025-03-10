/*
Name:
Date:
Description:11. WAP to print sort array
Sample Input:
Sample Output:
*/

#include <stdio.h>

// Function to perform bubble sort
void bubbleSort(int arr[], int n) {

    int temp;
    for (int i = 0; i < n - 1; i++) {
    
        // Flag to check if any swap was done
        int flag = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        
        // If no two elements were swapped, break
        if (!flag) {
            break;
        }
    }
}


int main() {

    int n;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare an array of the input size
    int array[n];

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Sort the array using bubble sort
    bubbleSort(array, n);

    // Print the sorted array
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
