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
            || flags_arr[i] == '1' || flags_arr[i] == 'm'
            || flags_arr[i] == 'g' || flags_arr[i] == 'n'
            || flags_arr[i] == 'o') {
            if (output != ' ' || (output != 'l' && (flags_arr[i] != 'g'
                || flags_arr[i] != 'n' || flags_arr[i] != 'o'))) {
                flags_arr[i] = ' ';
            }
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
                || flags_arr[i] == 'h' || flags_arr[i] == 'O') {
                flags_arr[i] = ' ';
            }
    if (!mx_is_flag_present(flags_arr, 't'))
        for (int i = mx_strlen(flags_arr); i >= 0; i++)
            if (flags_arr[i] == 'u' || flags_arr[i] == 'U'
                || flags_arr[i] == 'c') {
                flags_arr[i] = ' ';
            }
}


