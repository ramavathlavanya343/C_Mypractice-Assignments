/*
Name:
Date:
Description:19.Find the index of given number in a matrix
Sample Input:
Sample Output:
*/

#include <stdio.h>

// Function to find the index of a given number in a matrix
int find_index(int matrix[][100], int rows, int cols, int number, int *row_index, int *col_index) {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == number) {
                *row_index = i;
                *col_index = j;
                return 1; // Number found
            }
        }
    }
    return 0; // Number not found
}

int main() {

    int rows, cols, number;
    int matrix[100][100];

    // Input the dimensions of the matrix
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Input the number to find
    printf("Enter the number to find: ");
    scanf("%d", &number);

    int row_index, col_index;
    if (find_index(matrix, rows, cols, number, &row_index, &col_index)) {
        printf("Number %d found at index [%d][%d]\n", number, row_index, col_index);
    } else {
        printf("Number %d not found in the matrix\n", number);
    }

    return 0;
}
