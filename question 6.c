#include <stdio.h>

int main() {
    int m, n, p;

    // Input sizes
    printf("Enter rows and columns of first matrix (m n): ");
    scanf("%d %d", &m, &n);

    printf("Enter columns of second matrix (p): ");
    scanf("%d", &p);

    int a[50][50], b[50][50], c[50][50];

    // Input first matrix
    printf("Enter elements of first matrix (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix (%d x %d):\n", n, p);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize result matrix to 0
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            c[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display result
    printf("Resultant Matrix (Multiplication):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}





Enter rows and columns of first matrix (m n): 2 2
Enter columns of second matrix (p): 2
Enter elements of first matrix (2 x 2):
1 2
3 4
Enter elements of second matrix (2 x 2):
5 6
7 8
Resultant Matrix (Multiplication):
19 22
43 50
