#include "libmx.h"

char *mx_strnew(const int size) {
    char *new;

    if (size < 0) return NULL;
    new = malloc(size + 1);
    if (!new) return NULL;
    for (int i = 0; i < size + 1; i++)
        new[i] = '\0';
    return new;
}

