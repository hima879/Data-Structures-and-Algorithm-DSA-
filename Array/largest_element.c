#include<stdio.h>

int main() {
    // Step 1: Declare and initialize the array
    int a[5] = {3, 2, 1, 5, 2};
    int n = 5;

    // Step 2: Assume the first element is the maximum
    int max = a[0];

    // Step 3: Traverse the array to find the largest element
    for (int i = 1; i < n; i++) {
        // If current element is greater than max, update max
        if (a[i] > max) {
            max = a[i];
        }
    }

    // Step 4: Print the largest element
    printf("Largest element in the array is: %d\n", max);

    return 0;
}
