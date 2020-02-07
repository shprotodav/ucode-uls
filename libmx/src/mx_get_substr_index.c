#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
    int str_counter = 0;
    int sub_counter = 0;
    int len_str;
    int len_sub;

    if (str == NULL || sub == NULL)
        return -2;
    len_str = mx_strlen(str);
    len_sub = mx_strlen(sub);
    for (int i = 0; i < len_str; sub_counter = 0, i++) {
        str_counter = i;
        for (int j = 0; j < len_sub; j++) {
            if (str[str_counter] == sub[j])
                sub_counter++;
            str_counter++;
        }
        if (sub_counter == len_sub)
            return i;
    }
    return -1;
}
