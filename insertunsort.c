/*
Name:
Date:
Description:
Sample Input:
Sample Output:
*/

/*
Name: Insert Value in Unsorted Array
Date: 2024-08-27
Description: This program inserts a new value into an unsorted array.
Sample Input:
Enter the number of elements: 5
Enter the elements: 10 20 30 40 50
Enter the new value to be inserted: 25
Sample Output:
Array after insertion: 10 20 30 40 50 25
*/

#include <stdio.h>

int main() {

    int arr[100], n, value, i;

    // Getting the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Getting the elements of the array
    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Getting the value to be inserted
    printf("Enter the new value to be inserted: ");
    scanf("%d", &value);

    // Inserting the new value at the end of the array
    arr[n] = value;

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



