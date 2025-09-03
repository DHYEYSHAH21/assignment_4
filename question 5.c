#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int a[50][50], b[50][50], sum[50][50];

    // Input for first matrix
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input for second matrix
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Adding matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Display result
    printf("Resultant Matrix (Sum):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}





Enter number of rows and columns: 2 2
Enter elements of first matrix:
1 2
3 4
Enter elements of second matrix:
5 6
7 8
Resultant Matrix (Sum):
6 8
10 12
