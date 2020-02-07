#include "uls.h"

static int new_gap(int gap);

void mx_sort_strarr(char **arr, int len) {
    int gap = len;
    bool swapped = true;

    while (gap > 1 || swapped) {
        mx_printstr("err0");
        swapped = false;
        gap = new_gap(gap);
        for (int i = 0; i < len - gap; ++i) {
            mx_printstr("err1");
            if (mx_strcmp(arr[i], arr[i + gap]) > 0) {
                mx_printstr("err2");
                mx_swap_strarr(arr, i, i + gap);
                swapped = true;
            }
        }
    }
}

static int new_gap(int gap) {
    gap /= 1.3;   //mx_printstr(" newGap works ");
    if (gap == 9 || gap == 10)
        gap = 11;
    if (gap < 1)
        return 1;
    return gap;
}
