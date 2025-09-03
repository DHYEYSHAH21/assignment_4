#include <stdio.h>

int main() {
    int a[10], freq[10];
    int i, j, count;

    // Input array
    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        freq[i] = -1;  // initialize frequency array
    }

    // Count frequencies
    for (i = 0; i < 10; i++) {
        count = 1;
        if (freq[i] != 0) {  // not already counted
            for (j = i + 1; j < 10; j++) {
                if (a[i] == a[j]) {
                    count++;
                    freq[j] = 0; // mark duplicate as counted
                }
            }
            freq[i] = count;
        }
    }

    // Display frequency of each element
    printf("Frequency of each element:\n");
    for (i = 0; i < 10; i++) {
        if (freq[i] != 0) {
            printf("%d occurs %d times\n", a[i], freq[i]);
        }
    }

    return 0;
}



Enter 10 elements:
2 5 2 3 5 7 3 2 8 5
Frequency of each element:
2 occurs 3 times
5 occurs 3 times
3 occurs 2 times
7 occurs 1 times
8 occurs 1 times




