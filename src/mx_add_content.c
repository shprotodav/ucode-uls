#include "uls.h"

void mx_add_content(t_obj *folder, struct stats *stats) {
    t_obj *obj = mx_create_obj(stats);
    
    folder->content = obj;
}
