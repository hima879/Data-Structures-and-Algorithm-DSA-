#include <stdio.h>

int main() {
    int a[9] = {15, 52, 47, 89, 18, 29, 53, 10, 65};
    int item = 29;         // The value we're searching for
    int loc = -1;          // -1 means "not found" by default

    printf("Starting linear search for %d...\n", item);

    for (int i = 0; i < 9; i++) {
        printf("Checking index %d: value = %d\n", i, a[i]);
        if (a[i] == item) {
            loc = i;
            printf(" --> Found %d at index %d!\n", item, i);
            break;
        }
    }

    if (loc != -1) {
        printf("Result: Item found at index %d\n", loc);
    } else {
        printf("Result: Item not found\n");
    }

    return 0;
}
