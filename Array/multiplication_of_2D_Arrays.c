#include <stdio.h>

int main() {
    // Step 1: Initialize 3x3 matrices A and B with values
    int A[3][3] = {{2, 4, 6}, {8, 10, 12}, {14, 16, 18}};
    int B[3][3] = {{2, 4, 6}, {8, 10, 12}, {14, 16, 18}};
    int C[3][3];  // Matrix to store the result

    // Step 2: Perform element-wise multiplication
    for (int i = 0; i < 3; i++) {             // Loop through rows
        for (int j = 0; j < 3; j++) {         // Loop through columns
            C[i][j] = A[i][j] * B[i][j];      // Multiply corresponding elements
        }
    }

    // Step 3: Display the result matrix
    printf("Result of element-wise multiplication:\n");
    for (int i = 0; i < 3; i++) {             // Loop through rows
        for (int j = 0; j < 3; j++) {         // Loop through columns
            printf("%d ", C[i][j]);           // Print each element
        }
        printf("\n");                         // Newline after each row
    }

    return 0;  // End of program
}
