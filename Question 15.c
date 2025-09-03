#include <stdio.h>

int main() {
    int a[20], n;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Delete first element (shift left)
    for (int i = 0; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;  // reduce size

    // Print updated array
    printf("Array after deleting first element:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}




Enter number of elements: 5
Enter 5 elements:
10 20 30 40 50
Array after deleting first element:
20 30 40 50






