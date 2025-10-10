#include <stddef.h> // For NULL
#include <stdlib.h> // For malloc

/**
 * Create a new dynamically allocated array containing the even numbers
 * between begin and end (inclusive), in increasing order. Returns NULL if
 * the range contains no even numbers or begin > end or on allocation failure.
 */
int* array_create_evens(int begin, int end) {
    if (begin > end) {
        return NULL;
    }

    /* Find the first even >= begin */
    int first = (begin % 2 == 0) ? begin : begin + 1;
    if (first > end) {
        /* No evens in range */
        return NULL;
    }

    /* Find the last even <= end */
    int last = (end % 2 == 0) ? end : end - 1;

    int size = (last - first) / 2 + 1;

    int* array = malloc((size_t)size * sizeof(int));
    if (array == NULL) {
        return NULL;
    }

    for (int i = 0, value = first; i < size; ++i, value += 2) {
        array[i] = value;
    }

    return array;
}