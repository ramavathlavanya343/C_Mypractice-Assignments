/*
Name:
Date:
Description:15.WAP to sort negative elements and positive elements in an array
Sample Input:
Sample Output:
*/


#include <stdio.h>

void sortNegPos(int arr[], int n) {

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }
}

void printArray(int arr[], int n) {
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {

    int arr[] = {1, -1, 3, 2, -7, -5, 11, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    sortNegPos(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}

