/*
Name:
Date:
Description:
Sample Input:
Sample Output:
*/


#include <stdio.h>

// Function to separate odd and even integers into separate arrays
void separateOddEven(int arr[], int size, int oddArr[], int evenArr[], int *oddSize, int *evenSize) {

    *oddSize = 0;
    *evenSize = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            oddArr[*oddSize] = arr[i];
            *oddSize += 1;
        } else {
            evenArr[*evenSize] = arr[i];
            *evenSize += 1;
        }
    }
}

int main() {


    int arr[100], oddArr[100], evenArr[100];

    int n, oddSize = 0, evenSize = 0;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Separate odd and even integers into separate arrays
    separateOddEven(arr, n, oddArr, evenArr, &oddSize, &evenSize);

    // Print odd integers array
    printf("Odd integers array: ");
    for (int i = 0; i < oddSize; i++) {
        printf("%d ", oddArr[i]);
    }
    printf("\n");

    // Print even integers array
    printf("Even integers array: ");
    for (int i = 0; i < evenSize; i++) {
        printf("%d ", evenArr[i]);
    }
    printf("\n");

    return 0;
}



