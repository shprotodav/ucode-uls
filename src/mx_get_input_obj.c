#include "uls.h"

static void add_obj(
    char **input_obj_arr, char *input_obj, int input_obj_count);

char **mx_get_input_obj(int argc, char **argv) {
    char **input_obj = NULL;
    bool break_flag = false;

    for (int i = 1; i < argc; i++) {
        if (argv[i][0] != '-' || break_flag)
            add_obj(input_obj, argv[i], argc - i);
        if (mx_strcmp(argv[i], "--") == 0)
            break_flag = true;
    }
    return input_obj;
}

static void add_obj(
    char **input_obj_arr, char *input_obj, int input_obj_count) {
    int i;

    if (input_obj_arr == NULL)
        input_obj_arr = malloc(sizeof(char *) * (input_obj_count + 1));
    for (i = 0; input_obj_arr; i++);
    input_obj_arr[i] = mx_strdup(input_obj);
}