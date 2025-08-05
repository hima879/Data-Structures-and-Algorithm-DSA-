#include <stdio.h>

int main() {
    // Sorted array with duplicates
    int a[9] = {5, 5, 7, 8, 8, 9, 9, 10, 11};
    
    // x is the index for placing unique elements
    int x = 0;

    // Traverse the array from index 1 to end
    for (int i = 1; i < 9; i++) {
        // If current element is not equal to last unique one
        if (a[x] != a[i]) {
            x = x + 1;    // Move x to next position
            a[x] = a[i];  // Replace with unique element
        }
    }

    // Print the modified array with only unique elements
    printf("Array after removing duplicates: ");
    for (int i = 0; i <= x; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
