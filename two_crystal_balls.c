#include "two_crystal_balls.h"
#include <math.h>

int twoCrystalBalls(bool *break_points, size_t size) {
    const unsigned leap = sqrt(size);
    
    unsigned i = leap;

    for (; i < size; i += leap) {
        if (break_points[i]) break;
    }

    i -= leap;

    for (unsigned j = 0; j < size && j < leap; i++, j++) {
        if (break_points[i]) {
            return i;
        }
    }

    return -1;
}
