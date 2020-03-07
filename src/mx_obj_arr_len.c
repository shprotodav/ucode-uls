#include "uls.h"

void mx_obj_arr_len(t_obj **list) {
    int count = 0;

    for (; list[count]; count++);
    return count;
}
