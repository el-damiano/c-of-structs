#include "linear_search.h"

int linearSearch(int query, size_t arrLength, int *arr) {

    for (int i = 0; i < arrLength; i++) {
        if (arr[i] == query) {
            return 1;
        }
    }
    return -1;

}
