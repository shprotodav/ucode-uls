#include "uls.h"

void mx_add_content(t_obj *folder, char *pathname) {
    t_obj *obj = mx_create_obj(pathname);
    
    folder->content = obj;
}
