#include "../bubble_sort.h"

int main() {
    int foo[7] = {9, 3, 7, -4, 3, 4, 42};
    int bar[7] = {-4, 3, 3, 4, 7, 9, 42};

    bubbleSort(foo, 7);

    for (int i = 0; i < 7; i++) {
        if (foo[i] != bar[i]) return 0;
    }

    printf("Test ran successfully\n");

    return 0;
}
