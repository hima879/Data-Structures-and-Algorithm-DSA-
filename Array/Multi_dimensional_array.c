#include <stdio.h>

int main() {
    // Declare and initialize a 3D array with dimensions: depth=2, rows=3, columns=2
    int arr[2][3][2] = {
        { { 1, 1 }, { 2, 3 }, { 4, 5 } },   // Depth layer 0
        { { 6, 7 }, { 8, 9 }, { 10, 11 } }  // Depth layer 1
    };

    // Traverse the 3D array:
    // Outer loop iterates over the 'depth' dimension
    for (int d = 0; d < 2; d++) {
        printf("Depth %d:\n", d);  // Indicate current depth layer

        // Middle loop iterates over rows within the current depth
        for (int i = 0; i < 3; i++) {

            // Inner loop iterates over columns within the current row
            for (int j = 0; j < 2; j++) {
                // Access and print the current element
                printf("arr[%d][%d][%d] = %d   ", d, i, j, arr[d][i][j]);
            }

            printf("\n");  // Newline after finishing one row
        }

        printf("\n");  // Blank line after finishing one depth layer
    }

    return 0;  // Exit program
}
