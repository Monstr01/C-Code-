#include <stdio.h>

#define SIZE 6

int linearSearch(int array[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (array[i] == key) {
            return i; // Element found, return the index
        }
    }

    return -1; // Element not found
}

int main() {
    int array[SIZE] = {10, 20, 30, 40, 50, 60};
    int key = 30;

    int index = linearSearch(array, SIZE, key);

    if (index != -1) {
        printf("Element %d found at index %d\n", key, index);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
