#include <stdio.h>

int main() {
    // Given sorted array
    int a[8] = {1, 12, 20, 29, 32, 35, 43, 46};
    int n = 8;
    int target = 44;

    // Initialize two pointers
    int left = 0;
    int right = n - 1;
    int found = 0;

    printf("Starting two-pointer search for sum %d\n", target);
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n\n");

    // Loop while left pointer is before right pointer
    while (left < right) {
        int sum = a[left] + a[right];
        printf("Checking: a[%d]=%d + a[%d]=%d → sum = %d\n",
               left, a[left], right, a[right], sum);

        if (sum == target) {
            // Found the pair
            printf(" ** Pair found! %d (index %d) + %d (index %d) = %d **\n\n",
                   a[left], left, a[right], right, target);
            found = 1;
            break;
        } else if (sum < target) {
            printf("Sum too small ( %d < %d ). Moving left pointer right.\n\n", sum, target);
            left++;
        } else {
            printf("Sum too big ( %d > %d ). Moving right pointer left.\n\n", sum, target);
            right--;
        }
    }

    // If no pair was found
    if (!found) {
        printf("No pair found in the array that sums to %d\n", target);
    }

    return 0;
}
