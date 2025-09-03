#include <stdio.h>

int main() {
    int a[5], b[10];

    // Input 5 elements
    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    // Copy with skipping
    int j = 0;
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            b[i] = a[j];   // copy element
            j++;
        } else {
            b[i] = 0;      // placeholder
        }
    }

    // Print new array
    printf("New array with skipped elements:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}




Enter 5 elements:
10 20 30 40 50
New array with skipped elements:
10 0 20 0 30 0 40 0 50 0






