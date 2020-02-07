#include "uls.h"

bool mx_is_flag_present(char *flags_arr, char flag) {
    for (int i = 0; flags_arr[i] != 0; i++)
        if (flags_arr[i] == flag)
            return true;
    return false;
}
