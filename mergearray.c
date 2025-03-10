/*
Name:
Date:
Description:8.Write a C program to merge two arrays into a third array using pointers.
Sample Input:
Sample Output:
*/

#include <stdio.h>

// Function to merge two arrays into a third array using pointers
void merge_arrays(int *a, int size_a, int *b, int size_b, int *c) {

    int *p = a;
    int *q = b;
    int *r = c;

    // Copy elements from the first array
    for (int i = 0; i < size_a; i++) {
        *r = *p;
        p++;
        r++;
    }

    // Copy elements from the second array
    for (int i = 0; i < size_b; i++) {
        *r = *q;
        q++;
        r++;
    }
}

int main() {

    int size_a, size_b;

    // Getting the size of the first array from the user
    printf("Enter the size of the first array: ");
    scanf("%d", &size_a);
    int a[size_a];

    // Getting elements of the first array from the user
    printf("Enter elements of the first array:\n");
    for (int i = 0; i < size_a; i++) {
        scanf("%d", &a[i]);
    }

    // Getting the size of the second array from the user
    printf("Enter the size of the second array: ");
    scanf("%d", &size_b);
    int b[size_b];

    // Getting elements of the second array from the user
    printf("Enter elements of the second array:\n");
    for (int i = 0; i < size_b; i++) {
        scanf("%d", &b[i]);
    }

    // The third array will have a size equal to the sum of the sizes of the first two arrays
    int c[size_a + size_b];

    // Merging the two arrays into the third array
    merge_arrays(a, size_a, b, size_b, c);

    // Printing the merged array
    printf("The merged array is:\n");
    for (int i = 0; i < size_a + size_b; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}
