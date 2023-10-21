#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

#include <stdio.h>

int binarySearch(int *arr, size_t size, int query);

#endif

#if !defined (ARRIZE)
#define ARRSIZE(array)  (sizeof(array) / sizeof((array)[0]))
#endif
