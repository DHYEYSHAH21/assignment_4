#include <stdio.h>

int main() {
    int a[4][4], transpose[4][4];

    // Input 4x4 matrix
    printf("Enter elements of 4x4 matrix:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Find transpose
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    // Print original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Print transpose matrix
    printf("\nTranspose Matrix:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}



Enter elements of 4x4 matrix:
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

Original Matrix:
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

Transpose Matrix:
1 5 9 13
2 6 10 14
3 7 11 15
4 8 12 16











