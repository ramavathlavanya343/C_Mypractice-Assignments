/*
Name:
Date:
Description:Write a C Program to insert New value in the array(sorted list)
Sample Input:
Sample Output:
*/

/*
Name: Insert Value in Sorted Array
Date: 2024-08-27
Description: This program inserts a new value into a sorted array while maintaining the sorted order.
Sample Input:
Enter the number of elements: 5
Enter the elements: 10 20 30 40 50
Enter the new value to be inserted: 25
Sample Output:
Array after insertion: 10 20 25 30 40 50
*/

#include <stdio.h>

int main() {

    int arr[100], n, value, i, j;

    // Getting the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Getting the sorted elements of the array
    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Getting the value to be inserted
    printf("Enter the new value to be inserted: ");
    scanf("%d", &value);

    // Finding the correct position to insert the new value
    for(i = 0; i < n; i++) {
        if(arr[i] > value) {
            break;
        }
    }

    // Shifting the elements to the right to make space for the new value
    for(j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    }

    // Inserting the new value
    arr[i] = value;

    // Incrementing the size of the array
    n++;

    // Printing the array after insertion
    printf("Array after insertion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


#if 0
#include <stdio.h>

void insertInSortedOrder(int arr[], int *size, int newValue, int maxSize) {

    int i = *size;

    // Check if there is space in the array
    if (*size >= maxSize) {
        printf("Array is full. Cannot insert new value.\n");
        return;
    }
    
    // Find the position where the new value should be inserted
    while (i > 0 && arr[i - 1] > newValue) {
        arr[i] = arr[i - 1];
        i--;
    }

    // Insert the new value
    arr[i] = newValue;
    (*size)++;
}

int main() {

    int n, new_value;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n + 1]; // Create an array with one extra space for the new value

    printf("Enter the elements of the sorted array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the new value to be inserted: ");
    scanf("%d", &new_value);
    
    insertInSortedOrder(arr, &n, new_value, n + 1); // Pass address of n

    printf("Array after insertion of %d:\n", new_value);
    for (int i = 0; i < n; i++) { // Print only up to the updated size
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0; 
}
#endif

