#include <stdio.h>

void deleteElement(int array[], int *size, int element) {
    for (int i = 0; i < *size; i++) {
        if (array[i] == element) {
            (*size)--;
            for (; i < *size; i++) {
                array[i] = array[i + 1];
            }
            printf("Element %d deleted successfully.\n", element);
            return;
        }
    }
    printf("Element %d not found in the array.\n", element);
}

int main() {
    int array[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(array) / sizeof(array[0]);
    int elementToDelete = 30;

    deleteElement(array, &size, elementToDelete);

    return 0;
}

