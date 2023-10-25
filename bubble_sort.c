#include "bubble_sort.h"

int bubbleSort(int *array, size_t size) {

    for (unsigned long i = 0; i < size - 1; i++) {
        for (unsigned long j = 0; j < size - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                const int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }

    return 1;
}
