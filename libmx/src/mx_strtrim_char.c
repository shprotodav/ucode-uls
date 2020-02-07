#include "libmx.h"

char *mx_strtrim_char(const char *str, char c) {
    int start = 0;
    int end;
    char *res;

    if (!str) return NULL;
    end = mx_strlen(str) - 1;
    for(; str[start] == c; start++);
    if (start == end + 1)
        return mx_strnew(0);
    for(; str[end] == c; end--);
    res = malloc(end - start + 2);
    if (!res) return NULL;
    for (int i = 0; i + start != end + 1; i++)
        res[i] = str[start + i];
    res[end + 1 - start] = '\0';
    return res;
}
