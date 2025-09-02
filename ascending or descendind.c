#include <stdio.h>

int main() {
    int values[5], i, j, temp;

    // Input 5 values
    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &values[i]);
    }

    // Ask user for sorting preference
    char order;
    printf("Enter 'A' for ascending or 'D' for descending order: ");
    scanf(" %c", &order);  // Note the space before %c to consume newline

    // Bubble sort
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4 - i; j++) {
            if((order == 'A' && values[j] > values[j + 1]) ||
               (order == 'D' && values[j] < values[j + 1])) {
                temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }
        }
    }

    // Display sorted values
    printf("Sorted values: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", values[i]);
    }

    return 0;
}
