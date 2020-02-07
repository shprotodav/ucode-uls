#include "uls.h"

static void add_folder(char **folders_arr, char *folder, int folders_count);

char **mx_get_input_folders(int argc, char **argv) {
    char **folders = NULL;
    bool interrupt_flags = false;

    for (int i = 1; i < argc; i++) {
        if (argv[i][0] != '-' || interrupt_flags)
            add_folder(folders, argv[i], argc - i);
        if (mx_strcmp(argv[i], "--") == 0)
            interrupt_flags = true;
    }
    return folders;
}

static void add_folder(char **folders_arr, char *folder, int folders_count) {
    int i;

    if (folders_arr == NULL)
        folders_arr = malloc(sizeof(char *) * (folders_count + 1));
    for (i = 0; folders_arr; i++);
    folders_arr[i] = mx_strdup(folder);
}