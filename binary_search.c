#include "binary_search.h"

int binarySearch(int *arr, size_t size, int query) {
    int lo = 0;
    int hi = size;

    while (lo < hi) {
        const int MIDDLE = lo + (hi - lo) / 2;
        const int VALUE = arr[MIDDLE];

        if (VALUE == query) return 1;
        else if (VALUE > query) {
            hi = MIDDLE;
        }
        else {
            lo = MIDDLE + 1;
        }
    }

    return 0;
}
