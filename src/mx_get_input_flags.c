#include "uls.h"

static void add_to_flags(char *flags_arr, char flag);

static void error_illegal_option(char c);

char *mx_get_input_flags(int argc, char **argv) {
    char *flags = NULL;

    for (int i = 1; i < argc && argv[i][0] == '-'; i++) {
        if (mx_strcmp(argv[i], "--") == 0)
            break;
        for (int j = 1; argv[i][j]; j++) {
            if (mx_get_char_index(MY_FLAGS, (argv[i][j])) == -1)
                error_illegal_option(argv[i][j]);
            add_to_flags(flags, argv[i][j]);
        }
    }
    return flags;
}

static void add_to_flags(char *flags_arr, char flag) {
    int i;

    if (flags_arr == NULL)
        flags_arr = mx_strnew(mx_strlen(MY_FLAGS));
    for (i = 0; flags_arr[i] != 0; i++)
        if (flags_arr[i] == flag)
            return;
    flags_arr[i] = flag;
}

static void error_illegal_option(char c) {
    mx_printerr("uls: illegal option -- ");
    mx_printerr(&c);
    mx_printerr("\nusage: ls [-");
    mx_printerr(MY_FLAGS);
    mx_printerr("] [file ...]\n");
    exit(1);
}
