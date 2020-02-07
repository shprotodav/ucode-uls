#include "uls.h"

void mx_swap_strarr(char **arr, int index1, int index2) {
    char *tmp;

    if (!**arr || !*arr) return;
    tmp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = tmp;
}
