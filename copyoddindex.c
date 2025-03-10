/*
Name:
Date:
Description:write a c program to copy the elements of odd index from one  array into another array
Sample Input:
Sample Output:
*/

#include <stdio.h>

void copyOddIndices(int source[], int sourceSize, int destination[], int *destSize) {

    int i, j = 0;

    // Iterate through the source array
    for (i = 1; i < sourceSize; i += 2) { // Start from index 1 and increment by 2 (odd indices)
        destination[j] = source[i];
        j++;
    }

    // Update the size of the destination array
    *destSize = j;
}

int main() {
    
    int source[] = {1,2,3,4,5};
    int sourceSize = sizeof(source) / sizeof(source[0]);
    int destination[sourceSize]; // Destination array with maximum possible size
    int destSize = 0, i;

    printf("Source array: ");
    for (i = 0; i < sourceSize; i++) {
        printf("%d ", source[i]);
    }
    printf("\n");

    copyOddIndices(source, sourceSize, destination, &destSize);

    printf("Destination array (elements at odd indices): ");
    for (i = 0; i < destSize; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");

    return 0;
}
