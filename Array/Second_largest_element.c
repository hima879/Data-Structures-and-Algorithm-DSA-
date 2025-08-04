#include <stdio.h>

int main() {
    // Initialize array
    int a[8] = {25, 16, 38, 10, 35, 48, 20, 50};
    int n = 8;

    // Declare variables to store the largest and second largest values
    int max1, max2;

    // Step 1: Compare first two elements to initialize max1 and max2
    if (a[0] > a[1]) {
        max1 = a[0];
        max2 = a[1];
    } else {
        max1 = a[1];
        max2 = a[0];
    }

    // Step 2: Loop through the rest of the array starting from index 2
    for (int i = 2; i < n; i++) {
        if (a[i] > max1) {
            // Current element is the new largest
            max2 = max1;
            max1 = a[i];
        } else if (a[i] > max2) {
            // Current element is the new second largest
            max2 = a[i];
        }
    }

    // Step 3: Print the results
    printf("Largest element in the array is: %d\n", max1);
    printf("Second largest element in the array is: %d\n", max2);

    return 0;
}
