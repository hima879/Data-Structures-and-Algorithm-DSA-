#include <stdio.h>

#define ROWS 3
#define COLS 4

int main() {
    // Define and initialize a 2D array (3 rows × 4 columns)
    int arr[ROWS][COLS] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12}
    };

    // Traverse and print elements row by row
    for (int row = 0; row < ROWS; ++row) {      // Outer loop iterates over rows
        for (int col = 0; col < COLS; ++col) {  // Inner loop iterates over columns
            printf("%d ", arr[row][col]);       // Access and print each element
        }
        printf("\n");                           // Newline after each row
    }

    return 0;  // End program
}
