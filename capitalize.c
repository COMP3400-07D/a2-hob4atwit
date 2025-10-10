#include <stddef.h> // For NULL
#include <stdlib.h> // For malloc/free
#include <string.h> // For strlen
#include <ctype.h>  // For toupper

/**
 * Return a newly-allocated string that is the input string with all
 * lowercase alphabetic characters converted to uppercase. Returns NULL
 * if input is NULL or on allocation failure. The caller is responsible
 * for freeing the returned buffer. Empty string returns an allocated
 * empty string ("\0").
 */
char* capitalize(const char* s) {
    size_t len;
    char *result;
    size_t i;

    if (s == NULL) {
        return NULL;
    }

    len = strlen(s);
    result = malloc((len + 1) * sizeof(char));
    if (result == NULL) {
        return NULL;
    }

    for (i = 0; i < len; ++i) {
        unsigned char c = (unsigned char)s[i];
        result[i] = (char)toupper(c);
    }
    result[len] = '\0';
    return result;
}
