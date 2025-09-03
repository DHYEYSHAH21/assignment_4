#include <stdio.h>

int main() {
    int a[5], n;

    // Input number of elements
    printf("Enter number of elements (max 5): ");
    scanf("%d", &n);

    // Input array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Print array in reverse
    printf("Array in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}


Enter number of elements (max 5): 5
Enter 5 elements:
10 20 30 40 50
Array in reverse order:
50 40 30 20 10








