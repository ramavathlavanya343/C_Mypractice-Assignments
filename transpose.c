#if 1
#include <stdio.h>

void transposeMatrix(int rows, int cols, int matrix[rows][cols], int transpose[cols][rows]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

int main() {

    int rows, cols;

    // Input the size of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int transpose[cols][rows];

    // Input the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Transpose the matrix
    transposeMatrix(rows, cols, matrix, transpose);

    // Output the transposed matrix
    printf("The transposed matrix is:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#endif

#if 0
#include <stdio.h>
/*
Name:
Date:
Description:
Sample Input:
Sample Output:
*/
int main()
{

    int row,col;

    scanf("%d %d",&row,&col);

    int arr[row][col];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);

        }
    }

    int trans[col][row];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {

            trans[i][j]=arr[j][i];

        }
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",trans[i][j]);

        }
    }
    
  // printf("\n");

   // }
}
#endif

