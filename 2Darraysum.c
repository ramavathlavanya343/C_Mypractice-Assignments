/*
Name:
Date:
Description:WAP to Sum of all elements 2d array
Sample Input:
Sample Output:
*/

#include <stdio.h>

int main() {

    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int array[rows][cols];

    // Input elements in the 2D array
    printf("Enter elements of the array:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // Calculate the sum of all elements
    int sum = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum += array[i][j];
        }
    }

    printf("Sum of all elements: %d\n", sum);

    return 0;
}
