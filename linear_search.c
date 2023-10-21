#include "linear_search.h"

int linearSearch(int *arr, size_t arrSize, int query) {

    for (unsigned i = 0; i < arrSize; i++) {
        if (arr[i] == query) {
            return 1;
        }
    }
    return 0;

}
