#include <stdio.h>

int main() {
    int amount;
    int notes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};  // available denominations
    int noteCount[9] = {0};  // to store count of each note

    printf("Enter the amount: ");
    scanf("%d", &amount);

    int remaining = amount;

    for (int i = 0; i < 9; i++) {
        if (remaining >= notes[i]) {
            noteCount[i] = remaining / notes[i];   // how many notes of this type
            remaining = remaining % notes[i];      // update remaining amount
        }
    }

    printf("Minimum notes for %d are:\n", amount);
    for (int i = 0; i < 9; i++) {
        if (noteCount[i] > 0) {
            printf("%d x %d\n", notes[i], noteCount[i]);
        }
    }

    return 0;
}


Enter the amount: 1256
Minimum notes for 1256 are:
500 x 2
200 x 1
50 x 1
5 x 1
1 x 1








