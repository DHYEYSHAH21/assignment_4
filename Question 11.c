#include <stdio.h>

int main() {
    int a[10], n, choice;
    
    // Input array
    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    // Input shift value
    printf("Enter number of positions to shift: ");
    scanf("%d", &n);

    // Choose direction
    printf("Enter 1 for Left shift, 2 for Right shift: ");
    scanf("%d", &choice);

    int result[10];

    // Left shift
    if (choice == 1) {
        for (int i = 0; i < 10; i++) {
            if (i + n < 10)
                result[i] = a[i + n];
            else
                result[i] = 0;  // pad with 0
        }
    }
    // Right shift
    else if (choice == 2) {
        for (int i = 9; i >= 0; i--) {
            if (i - n >= 0)
                result[i] = a[i - n];
            else
                result[i] = 0;  // pad with 0
        }
    } else {
        printf("Invalid choice!\n");
        return 0;
    }

    // Print shifted array
    printf("Array after shifting:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}


Enter 10 elements:
1 2 3 4 5 6 7 8 9 10
Enter number of positions to shift: 3
Enter 1 for Left shift, 2 for Right shift: 1
Array after shifting:
4 5 6 7 8 9 10 0 0 0



  Enter 10 elements:
1 2 3 4 5 6 7 8 9 10
Enter number of positions to shift: 3
Enter 1 for Left shift, 2 for Right shift: 2
Array after shifting:
0 0 0 1 2 3 4 5 6 7








