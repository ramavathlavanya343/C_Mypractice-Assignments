/*
Name:
Date:
Description:20.Using 2D array Reverse each row
Sample Input:
Sample Output:
*/

#include <stdio.h>

// Function to reverse each row of the matrix
void reverse_rows(int matrix[][100], int rows, int cols) {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols/2 ; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][cols -1 -j];
            matrix[i][cols -1 -j] = temp;
        }
    }
}


// Function to print a matrix
void print_matrix(int matrix[][100], int rows, int cols) {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int rows, cols;
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
    
    // Reverse each row of the matrix
    reverse_rows(matrix, rows, cols);
    
    // Print the matrix after reversing rows
    printf("Matrix after reversing each row:\n");
    print_matrix(matrix, rows, cols);

    return 0;
}
