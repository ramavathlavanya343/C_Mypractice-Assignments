/*
Name:
Date:
Description:Maxium Square
Sample Input:
Sample Output:
*/


#include <stdio.h>

// Function to calculate the maximum number of squares in an m x n matrix
int maxSquares(int m, int n) {

    int totalSquares = 0;

    // Minimum dimension determines the maximum size of the square
    int minDim = (m < n) ? m : n;

    // Calculate the total number of squares for each size
    for (int k = 1; k <= minDim; k++) {
        totalSquares += (m - k + 1) * (n - k + 1);
    }
    
    return totalSquares;
}

int main() {

    int m, n;

    // Input dimensions of the matrix
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    // Calculate the maximum number of squares
    int result = maxSquares(m, n);

    // Output the result
    printf("Maximum number of squares in a %dx%d matrix: %d\n", m, n, result);

    return 0;
}
