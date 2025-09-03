#include <stdio.h>

int main() {
    int a[20], n, num, pos;

    // Input size of array
    printf("Enter number of elements (max 19): ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Input new number and position
    printf("Enter number to insert: ");
    scanf("%d", &num);

    printf("Enter position (0 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }

    // Shift elements to right
    for (int i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }

    // Insert new number
    a[pos] = num;
    n++;

    // Print updated array
    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}



Enter number of elements (max 19): 5
Enter 5 elements:
10 20 30 40 50
Enter number to insert: 99
Enter position (0 to 5): 2
Array after insertion:
10 20 99 30 40 50

