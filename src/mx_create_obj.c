#include "uls.h"

t_obj *mx_create_obj(char *pathname) {
    t_obj *obj = malloc(sizeof(t_obj));
    struct stat *buf;

    stat(pathname, buf);
    obj.stat = buf;
    obj->content = NULL;
    obj->next = NULL;
    return obj;
}
