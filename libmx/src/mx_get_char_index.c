#include "libmx.h"

int mx_get_char_index(const char *str, char c) {
    int res = 0;

    if (!str)
        return -2;
    for (; str[res] != '\0' && str[res] != c; res++);
    if (str[res] == c)
        return res;
    else
        return -1;
}

