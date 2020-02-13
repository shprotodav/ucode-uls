#include "uls.h"

void mx_add_obj(t_obj **list, char *pathname) {
    t_obj *obj = mx_create_obj(pathname);
    t_obj *last;
    
    if (*list == NULL)
        *list = obj;
    else {
        last = *list;
        while (last->next != NULL)
            last = last->next;
        last->next = obj;
    }
}
