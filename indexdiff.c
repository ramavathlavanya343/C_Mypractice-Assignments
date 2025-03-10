/*
Name:
Date:
Description:write a c program to  you are given with an array of numbers your task is to print the difference of index of larges
and smallest number all number are unique
Sample Input:
Sample Output:
*/

#include <stdio.h>

void findIndexDifference(int arr[], int size) {

    if (size < 1) {
        printf("Array is empty.\n");
        return;
    }

    int minIndex = 0;
    int maxIndex = 0;

    // Initialize min and max indices
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;  //arr[i] want to print min value
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;   //arr[i] want to print max value
        }
    }

    // Calculate and print the difference
    int indexDifference = maxIndex - minIndex;
    printf("Index of smallest number: %d\n", minIndex);
    printf("Index of largest number: %d\n", maxIndex);
    printf("Difference between indices: %d\n", indexDifference);
}

int main() {

    int arr[] = {12, 34, 7, 89, 23, 56, 78};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    findIndexDifference(arr, size);

    return 0;
}
