#include <stdio.h>

int main() {
    int a[10], i;

    // Input 10 values
    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    // Print 4th, 7th, and 9th values (indexing starts from 0)
    printf("4th value: %d\n", a[3]);
    printf("7th value: %d\n", a[6]);
    printf("9th value: %d\n", a[8]);

    return 0;
}
