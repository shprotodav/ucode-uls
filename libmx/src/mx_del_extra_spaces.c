#include "libmx.h"

char *mx_del_extra_spaces(const char *str) {
    char *res;
    char *buf = mx_strnew(mx_strlen(str));
    int k = 0;
    
    for (int i = 0; str[i]; buf[k++] = str[i++])
        if (mx_isspace(str[i])) {
            while (mx_isspace(str[++i]));
            buf[k++] = ' ';
        }
    res = mx_strtrim(buf);
    mx_strdel(&buf);
    return res;
}
