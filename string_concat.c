#include <stddef.h> // For NULL

/**
 * TODO: Describe what the function does
 */
void string_concat(char* src1, int src1_cap, const char* src2) {
    if (src1 == NULL || src2 == NULL || src1_cap <= 0) {
        return;
    }

    int len1 = 0;
    while (len1 < src1_cap && src1[len1] != '\0') {
        len1++;
    }

    int len2 = 0;
    while (src2[len2] != '\0') {
        len2++;
    }

    int copy_len = (len1 + len2 < src1_cap - 1) ? len2 : (src1_cap - 1 - len1);
    for (int i = 0; i < copy_len; ++i) {
        src1[len1 + i] = src2[i];
    }
    src1[len1 + copy_len] = '\0';
}


