#include <stdio.h>

int main() {
    int array[] = {10, 20, 40, 50, 60};
    int size = sizeof(array) / sizeof(array[0]);
    int position = 2;
    int value = 30;

    // Shift elements to the right from the desired position
    for (int i = size - 1; i >= position; i--) {
        array[i + 1] = array[i];
    }

    // Insert the value at the desired position
    array[position] = value;

    // Print the modified array
    for (int i = 0; i < size + 1; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

