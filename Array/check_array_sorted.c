#include <stdio.h>

int main() {
    // Initialize the array
    int a[8] = {1, 2, 2, 3, 4, 5, 6, 7};

    // Calculate the size of the array
    int n = sizeof(a) / sizeof(a[0]);

    // Print the array
    printf("Checking if the following array is sorted:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Loop through array and check if it is sorted in non-decreasing order
    for (int i = 1; i < n; i++) {
        // If any element is smaller than the previous one, it is not sorted
        if (a[i] < a[i - 1]) {
            printf("No, the array is not sorted\n");
            return 0; // Exit the program early
        }
    }

    // If loop completes without finding any decreasing pair
    printf("Yes, the array is sorted\n");
    return 0;
}
