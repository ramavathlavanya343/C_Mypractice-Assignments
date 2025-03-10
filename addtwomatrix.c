/*
Name:
Date:
Description:write a program in c for addition of two matrices of same size
Sample Input:
Sample Output:
*/

#include <stdio.h>

void inputMatrix(int matrix[100][100], int rows, int cols) {
    printf("Enter elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[100][100], int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int mat1[100][100], int mat2[100][100], int result[100][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main() {

    int mat1[100][100], mat2[100][100], result[100][100];
    int rows, cols;

    // Input the dimensions of the matrices
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Input the elements of the first matrix
    printf("Matrix 1:\n");
    inputMatrix(mat1, rows, cols);

    // Input the elements of the second matrix
    printf("Matrix 2:\n");
    inputMatrix(mat2, rows, cols);

    // Add the two matrices
    addMatrices(mat1, mat2, result, rows, cols);

    // Print the resulting matrix
    printf("Resulting Matrix after addition:\n");
    printMatrix(result, rows, cols);

    return 0;
}




