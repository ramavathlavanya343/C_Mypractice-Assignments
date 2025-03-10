/*
Name:
Date:
Description:
Sample Input:
Sample Output:
*/

#include <stdio.h>

// Function to print a triangle pattern
void printTriangle(int n) {

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }
}


// Function to print a square pattern
void printSquare(int n) {

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            printf("* ");
        }
        printf("\n");
    }
}


// Function to print a pyramid pattern
void printPyramid(int n) {

    for (int i = 1; i <= n; ++i) {
        for (int j = i; j < n; ++j) {
            printf("  ");
        }
        for (int j = 1; j <= (2 * i - 1); ++j) {
            printf("* ");
        }
        printf("\n");
    }
}

                                      
// Function to print a diamond pattern
void printDiamond(int n) {

    // Print upper pyramid
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j < n; ++j) {
            printf("  ");
        }
        for (int j = 1; j <= (2 * i - 1); ++j) {
            printf("* ");
        }
        printf("\n");
    }
    // Print lower pyramid
    for (int i = n - 1; i >= 1; --i) {
        for (int j = n; j > i; --j) {
            printf("  ");
        }
        for (int j = 1; j <= (2 * i - 1); ++j) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {

    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("\nTriangle pattern:\n");
    printTriangle(n);

    printf("\nSquare pattern:\n");
    printSquare(n);

    printf("\nPyramid pattern:\n");
    printPyramid(n);

    printf("\nDiamond pattern:\n");
    printDiamond(n);

    return 0;
}
