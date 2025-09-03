#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5; // current logical size of array
    int valToDelete = 30; // value to delete
    int i, j;

    // Find the value and shift elements
    for (i = 0; i < n; i++) {
        if (arr[i] == valToDelete) {
            // Shift all elements to the left
            for (j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--; // reduce logical size
            break; // remove only first occurrence
        }
    }

    // Print the updated array
    printf("Array after deletion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}




Array after deletion: 10 20 40 50






