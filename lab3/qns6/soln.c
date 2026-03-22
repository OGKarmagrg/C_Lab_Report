//Write a program to find the transpose of a matrix.
#include <stdio.h>
int main()
{
    int m, n, i, j;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);
    int matrix[m][n], transpose[n][m];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Transpose the matrix
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    // Print the transposed matrix
    printf("The transposed matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}