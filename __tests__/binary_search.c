#include "../binary_search.h"

int g_foo[11] = {1, 3, 4, 69, 71, 81, 90, 99, 420, 1337, 69420};
size_t g_fooSize = ARRSIZE(g_foo);

int none_found() {
    int bar[2][5] = {
        {68, 1336, 69421, 1000000, 0},
        {0, 0, 0, 0, 0}
    };

    for (unsigned i = 0; i < ARRSIZE(bar[0]); i++) {
        int found = binarySearch(g_foo, g_fooSize, bar[0][i]);
        if (found != bar[1][i]) return 0;
    };

    return 1;
}

int all_found() {
    int bar[2][5] = {
        {69, 1337, 69420, 1, 3},
        {1, 1, 1, 1, 1}
    };

    for (unsigned i = 0; i < ARRSIZE(bar[0]); i++) {
        int found = binarySearch(g_foo, g_fooSize, bar[0][i]);
        if (found != bar[1][i]) return 0;
    };

    return 1;
}

int three_out_of_five_found() {
    int bar[2][5] = {
        {69, 1336, 69420, 1, 0},
        {1, 0, 1, 1, 0}
    };

    for (unsigned i = 0; i < ARRSIZE(bar[0]); i++) {
        int found = binarySearch(g_foo, g_fooSize, bar[0][i]);
        if (found != bar[1][i]) return 0;
    };

    return 1;
}

int main() {

    int (*tests[3])() = { none_found, all_found, three_out_of_five_found};
    int testCount = ARRSIZE(tests);
    int counter = 0;

    for (int i = 0; i < testCount; i++) {
        if (tests[i]()) counter++;
    }

    printf("%d out of %d tests have finished successfully\n", counter, testCount);

    return 0;
}
