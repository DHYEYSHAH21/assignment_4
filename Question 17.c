#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;  // current logical size of the array

    printf("Original array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Delete last element
    if (n > 0) {
        n--;  // reduce the logical size
    }

    printf("After deleting last element: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}




Original array: 10 20 30 40 50
After deleting last element: 10 20 30 40








