#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    int sub_count;
    int sub_len;
    char *result;

    if (!str || !sub || !replace)
        return NULL;
    sub_count = mx_count_substr(str, sub);
    sub_len = mx_strlen(sub);
    result = mx_strnew(mx_strlen(str) + sub_count * (mx_strlen(replace) - sub_len));
    for (int index = 0; sub_count--; str += index + sub_len) {
        index = mx_get_substr_index(str, sub); // Find index of next sub
        mx_strcat(result, mx_strndup(str, index)); // Add other text before sub
        mx_strcat(result, replace); // Add 1 replace text
    }
    mx_strcat(result, str); // Add text after all subs
    return result;
}
