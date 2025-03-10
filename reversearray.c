/*
Name:
Date:
Description:4. WAP to reverse the given array
Sample Input:
Sample Output:
*/

#include <stdio.h>

// Function to reverse the array
void reverseArray(int arr[], int n) {

    int temp;
    int start = 0;
    int end = n - 1;

    while (start < end) {
        // Swap the elements
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move towards the middle
        start++;
        end--;
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

    // Reverse the array
    reverseArray(array, n);

    // Print the reversed array
    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
