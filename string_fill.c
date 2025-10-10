#include <stddef.h> // For NULL

/**
 * TODO: Describe what the function does
 */
void string_fill(char dest[], int dest_cap, char c) {
    if (dest == NULL || dest_cap <= 0) {
        return;
    }

    for (int i = 0; i < dest_cap - 1; ++i) {
        dest[i] = c;
    }
    dest[dest_cap - 1] = '\0';
}
