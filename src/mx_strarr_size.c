#include "uls.h"

int mx_strarr_size(char **arr) {
    int counter = 0;

    if (!**arr || !*arr) return;
    while(arr[counter])
        counter++;
    return counter;
}
