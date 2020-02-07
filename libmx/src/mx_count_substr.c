#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    int count = 0;
    int sub_len;

    if (!str || !sub)
        return -1;
    if (sub[0] == 0)
        return 0;
    sub_len = mx_strlen(sub);
    for (char *point = mx_strstr(str, sub); point; count++) {
        str = point + sub_len;
        point = mx_strstr(str, sub);
    }
    return count;
}
