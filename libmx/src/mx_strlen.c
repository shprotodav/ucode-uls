#include "libmx.h"

int mx_strlen(const char *s) {
    int count = 0;

    for (; s[count] != '\0'; count++);
    return count;
}
