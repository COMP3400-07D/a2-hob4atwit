#include <stddef.h> // For NULL

/**
 * TODO: Describe what the function does
 */
int array_fill(int* array, int array_len, int begin, int end) {
    /* Validate inputs */
    if (array == NULL) {
        return 0;
    }
    if (array_len <= 0) {
        return 0;
    }
    if (begin > end) {
        /* Do not modify array when range is invalid */
        return 0;
    }

    int count = 0;
    int value = begin;

    /* Fill the array with values from begin to end */
    for (int i = 0; i < array_len && value <= end; ++i, ++value) {
        array[i] = value;
        ++count;
    }
    return count;
}
