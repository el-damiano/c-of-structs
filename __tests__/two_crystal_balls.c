#include "../two_crystal_balls.h"
#include <stdlib.h>
#include <time.h>

void populate_array(bool *array, size_t size, size_t idx, bool value) {
    for (unsigned i = idx; i < size; ++i) {
        array[i] = value;
    }
}

int did_not_break(bool *array, size_t size) {
    int broke = twoCrystalBalls(array, size);
    if (broke == -1) return 1;
    return 0;
}

int broke_at_end(bool *array, size_t size) {
    int lastIdx = size - 1;

    populate_array(array, size, lastIdx, true);

    if (twoCrystalBalls(array, size) == lastIdx) {
        populate_array(array, size, 0, false);
        return 1;
    }
    return 0;
}

int broke(bool *array, size_t size) {
    srand(time(NULL));
    int idx = rand() % size-1;

    populate_array(array, size, idx, true);

    if (twoCrystalBalls(array, size) != -1) {
        populate_array(array, size, 0, false);
        return 1;
    }
    return 0;
}

int broke_at_start(bool *array, size_t size) {
    populate_array(array, size, 0, true);

    if (twoCrystalBalls(array, size) == 0) {
        populate_array(array, size, 0, false);
        return 1;
    }
    return 0; 
}


int main() {

    size_t size = 10000;
    bool *bar = malloc(sizeof(*bar) * size);
    populate_array(bar, size, 0, false);

    int (*tests[4])() = { broke, did_not_break, broke_at_start, broke_at_end };
    int testCount = ARRSIZE(tests);
    int counter = 0;

    for (int i = 0; i < testCount; i++) {
        if (tests[i]()) counter++;
    }

    printf("%d out of %d tests have finished successfully\n", counter, testCount);

    return 0;
}
