#include "uls.h"

int main(int argc, char **argv) {
    char *flags = mx_get_input_flags(argc, argv);
    char **input_objs = mx_get_input_obj(argc, argv);

    mx_flag_priority(flags);
    //int *out_config = S_ISLNK();

}



