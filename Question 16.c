#include <stdio.h>

int main() {
    int a[20], n, pos;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Input position to delete
    printf("Enter position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return 0;
    }

    // Shift elements left
    for (int i = pos; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;  // reduce size

    // Print updated array
    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}



Enter number of elements: 5
Enter 5 elements:
10 20 30 40 50
Enter position to delete (0 to 4): 2
Array after deletion:
10 20 40 50






