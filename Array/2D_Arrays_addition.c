#include <stdio.h>

int main() {
    // Define the number of rows and columns for the matrices
    int rows = 2;
    int cols = 3;

    // Initialize two 2D arrays (matrices) with sample values
    int matrix1[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int matrix2[2][3] = {
        {6, 5, 4},
        {3, 2, 1}
    };

    // Initialize a 2D array to store the sum of the two matrices
    int sum[2][3];

    // Loop through each element of the matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Add corresponding elements and store in the sum matrix
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the resulting sum matrix
    printf("Sum of the two matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
