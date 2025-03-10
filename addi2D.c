/*
Name:
Date:
Description:
Sample Input:
Sample Output:
*/

#include <stdio.h>

void readMatrix(int rows, int cols, int matrix[rows][cols]) {

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
           // printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {

    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]) {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main() {

    int rows, cols;

    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &cols);

    int mat1[rows][cols], mat2[rows][cols], result[rows][cols];

    printf("Matrix 1:\n");
    readMatrix(rows, cols, mat1);

    printf("Matrix 2:\n");
    readMatrix(rows, cols, mat2);

    addMatrices(rows, cols, mat1, mat2, result);

    printf("Matrix 1:\n");
    printMatrix(rows, cols, mat1);

    printf("Matrix 2:\n");
    printMatrix(rows, cols, mat2);

    printf("Resultant Matrix (Matrix 1 + Matrix 2):\n");
    printMatrix(rows, cols, result);

    return 0;
}


