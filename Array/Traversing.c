#include<stdio.h>

int main() {
    int a[10];  // Declare an array to store 10 integers
    int i;      // Loop counter

    // Input: Take values from the user
    for (i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);  // Store each input in the array
    }

    // Output: Display all entered elements
    printf("\nYou entered the following elements:\n");
    for (i = 0; i < 10; i++) {
        printf("Element at index %d: %d\n", i, a[i]);  // Show each element with its index
    }

    return 0;
}
