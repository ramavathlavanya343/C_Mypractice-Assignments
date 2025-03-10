/*
Name:
Date:
Description:23.WAP a function to print the Spiral matrix
Sample Input:
Sample Output:
*/

#include <stdio.h>

void printSpiral(int rows, int cols, int matrix[rows][cols]) {

    int i, startRow = 0, startCol = 0;

    while (startRow < rows && startCol < cols) {
        // Print the first row from the remaining rows
        for (i = startCol; i < cols; ++i) {
            printf("%d ", matrix[startRow][i]);
        }
        startRow++;

        // Print the last column from the remaining columns
        for (i = startRow; i < rows; ++i) {
            printf("%d ", matrix[i][cols - 1]);
        }
        cols--;

        // Print the last row from the remaining rows
        if (startRow < rows) {
            for (i = cols - 1; i >= startCol; --i) {
                printf("%d ", matrix[rows - 1][i]);
            }            rows--;
        }

        // Print the first column from the remaining columns
        if (startCol < cols) {
            for (i = rows - 1; i >= startRow; --i) {
                printf("%d ", matrix[i][startCol]);
            }
            startCol++;
        }
    }
}

int main() {

    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Spiral order of the given matrix is:\n");
    printSpiral(rows, cols, matrix);

    return 0;
}
