#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int index;
    
    printf("Enter the index of the element to select (0-4): ");
    scanf("%d", &index);

    if (index >= 0 && index < 5) {  // check bounds
        printf("The selected value is: %d\n", arr[index]);
    } else {
        printf("Invalid index!\n");
    }

    return 0;
}




Enter the index of the element to select (0-4): 2
The selected value is: 30
