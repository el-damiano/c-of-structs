#ifndef TWO_CRYSTAL_BALLS_H
#define TWO_CRYSTAL_BALLS_H

#include <stdio.h>
#include <stdbool.h>

int twoCrystalBalls(bool *break_points, size_t size);

#endif

#if !defined (ARRIZE)
#define ARRSIZE(array)  (sizeof(array) / sizeof((array)[0]))
#endif
