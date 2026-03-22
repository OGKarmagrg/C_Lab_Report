//Write a C program that takes user inputs to Add and Multiply two matrices .

#include <stdio.h>
int main() {
    int rows, cols;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    int matrixA[rows][cols];
    int matrixB[rows][cols];
    int sum[rows][cols];
    int product[rows][cols];
    
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }
    
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }
    
    // Calculate sum of matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    
    // Calculate product of matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            product[i][j] = 0;
            for (int k = 0; k < cols; k++) {
                product[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    
    printf("Sum of Matrix A and Matrix B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    printf("Product of Matrix A and Matrix B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}