#include<stdio.h>

int main() {
    // Original array with duplicate elements
    int a[9] = {5, 5, 7, 8, 8, 9, 9, 10, 11};
    
    // Array to store unique elements
    int unique[9];

    // x keeps track of index for unique array
    int x = 0;

    // First element is always unique
    unique[0] = a[0];

    // Loop through the rest of the array
    for (int i = 1; i < 9; i++) {
        // Compare current element with the last unique element
        if (unique[x] != a[i]) {
            x = x + 1;              // Move to next index in unique array
            unique[x] = a[i];       // Store the unique element
        }
    }

    // Print the result
    printf("The new array with unique elements is: ");
    for (int i = 0; i <= x; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

    return 0;
}
