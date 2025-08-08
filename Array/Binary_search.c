#include <stdio.h>

int main() {
    int a[9] = {15, 22, 27, 39, 48, 50, 53, 60, 65};
    int B = 0, E = 8;                       // Start and end pointers
    int item = 39;
    int loc = -1;                          // Store the found index, -1 means not found

    printf("Starting binary search for %d in the array:\n", item);
    printf("[ ");
    for (int i = 0; i <= E; i++)
        printf("%d ", a[i]);
    printf("]\n\n");

    while (B <= E) {
        int mid = (B + E) / 2;
        printf("Checking middle index %d (value %d)\n", mid, a[mid]);

        if (a[mid] == item) {
            loc = mid;
            printf(" --> Found %d at index %d!\n\n", item, mid);
            break;
        } else if (a[mid] > item) {
            printf(" --> %d is greater than %d. Searching left half.\n\n", a[mid], item);
            E = mid - 1;
        } else {
            printf(" --> %d is less than %d. Searching right half.\n\n", a[mid], item);
            B = mid + 1;
        }
    }

    if (loc != -1)
        printf("Result: Item found at index %d\n", loc);
    else
        printf("Result: Item not found in the array\n");

    return 0;
}
