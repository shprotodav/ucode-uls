#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    if (!s) return NULL;
    s = (unsigned char *)s + n;
    for (; *((unsigned char *)s) != c && n > 0; n--)
        s = (unsigned char *)s - 1;
    if (*((unsigned char *)s) == c)
        return (unsigned char *)s;
    else
        return NULL;
}
