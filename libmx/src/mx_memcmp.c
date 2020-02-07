#include "libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
    for(size_t i = 1; *((unsigned char *)s1) == *((unsigned char *)s2)
        && i < n; i++) {
        s1 = (unsigned char *)s1 + 1;
        s2 = (unsigned char *)s2 + 1;
    }
    return *((unsigned char *)s1) - *((unsigned char *)s2);
}
