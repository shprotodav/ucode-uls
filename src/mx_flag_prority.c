#include "uls.h"

char *mx_flag_priority(char *flags_arr) {
    char output = ' ';
    char sort = ' ';

    out_sort(flags_arr, &output, &sort);
    special_priority(flags_arr);
    if (output == ' ')
        flags_arr[0] = 'C';
}

static void out_sort(char *flags_arr, char *output, char *sort) {
    for (int i = mx_strlen(flags_arr); i >= 0; i++)
        if (flags_arr[i] == 'l' || flags_arr[i] == 'C'
            || flags_arr[i] == '1' || flags_arr[i] == 'm') {
            if (output != ' ')
                flags_arr[i] = ' ';
            else
                output = flags_arr[i];
        }
    for (int i = mx_strlen(flags_arr); i >= 0; i++)
        if (flags_arr[i] == 'U' || flags_arr[i] == 'u' ||
            flags_arr[i] == 'c') {
            if (sort != ' ')
                flags_arr[i] = ' ';
            else
                sort = flags_arr[i];
        }
}

static void special_priority(char *flags_arr) {
    if (mx_is_flag_present(flags_arr, 'S'))
        for (int i = mx_strlen(flags_arr); i >= 0; i++)
            if (flags_arr[i] == 'U' || flags_arr[i] == 'u' ||
                flags_arr[i] == 'c') {
                flags_arr[i] = ' ';
            }
    if (!mx_is_flag_present(flags_arr, 'l'))
        for (int i = mx_strlen(flags_arr); i >= 0; i++)
            if (flags_arr[i] == 'u' || flags_arr[i] == 'U'
                || flags_arr[i] == '@' || flags_arr[i] == 'c'
                || flags_arr[i] == 'e' || flags_arr[i] == 'T'
                || flags_arr[i] == 'h') {
                flags_arr[i] = ' ';
            }
    if (!mx_is_flag_present(flags_arr, 't'))
        for (int i = mx_strlen(flags_arr); i >= 0; i++)
            if (flags_arr[i] == 'u' || flags_arr[i] == 'U'
                || flags_arr[i] == 'c') {
                flags_arr[i] = ' ';
            }
}


