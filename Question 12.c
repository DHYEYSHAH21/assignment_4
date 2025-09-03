#include <stdio.h>

int main() {
    int a[20], n, num;

    // Input size of array
    printf("Enter number of elements (max 19): ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Input new number
    printf("Enter number to insert at beginning: ");
    scanf("%d", &num);

    // Shift elements to the right
    for (int i = n; i > 0; i--) {
        a[i] = a[i - 1];
    }

    // Insert at first position
    a[0] = num;
    n++;  // increase array size

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
Enter number to insert at beginning: 99
Array after insertion:
99 10 20 30 40 50











