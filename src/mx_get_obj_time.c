#include "uls.h"

char *mx_get_obj_time(t_obj *obj, char *flags) {
    //if (mx_is_flag_present(flags, 'u'))
        char *new = NULL;

        new = data->flags[6] == 1 ? mx_strnew(20) : mx_strnew(12);
        tmp += 4;
        if (data->flags[6])
            mx_strncpy(new, tmp, 20);
        else if ((time(NULL) - cnst->time) < MX_HALF_YEAR)
            mx_strncpy(new, tmp, 12);
        else {
            mx_strncpy(new, tmp, 7);
            tmp += 15;
            mx_strcat(new, tmp);
            new[12] = '\0';
        }
        cnst->strtime = new;



    return out_config;
}


