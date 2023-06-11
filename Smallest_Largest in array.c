#include <stdio.h>

#define ARRAY_SIZE 5

void findMinMax(int array[], int size, int *min, int *max) {
    *min = *max = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] < *min) *min = array[i];
        if (array[i] > *max) *max = array[i];
    }
}

int main() {
    int array[ARRAY_SIZE] = {10, 20, 40, 50, 60};
    int min, max;

    findMinMax(array, ARRAY_SIZE, &min, &max);

    printf("Smallest: %d\n", min);
    printf("Largest: %d\n", max);

    return 0;
}

