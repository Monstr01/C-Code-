#include <stdio.h>

#define SIZE 5

int main() {
    int array[SIZE] = {10, 20, 30, 40, 50};

    printf("Array elements: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

