#include "libmx.h"

char *mx_strtrim(const char *str) {
    int start = 0;
    int end;
    char *res;

    if (!str) return NULL;
    end = mx_strlen(str) - 1;
    for(; mx_isspace(str[start]); start++);
    if (start == end + 1)
        return mx_strnew(0);
    for(; mx_isspace(str[end]); end--);
    res = malloc(end - start + 2);
    if (!res) return NULL;
    for (int i = 0; i + start != end + 1; i++)
        res[i] = str[start + i];
    res[end + 1 - start] = '\0';
    return res;
}

