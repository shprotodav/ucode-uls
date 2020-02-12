#include "uls.h"

t_obj *mx_create_obj(struct stats *stats) {
    t_obj *obj = malloc(sizeof(t_obj));
    
    obj->stats = stats;
    obj->content = NULL;
    obj->next = NULL;
    return obj;
}
