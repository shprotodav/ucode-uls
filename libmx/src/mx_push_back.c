#include "libmx.h"

void mx_push_back(t_list **list, void *data) {
    t_list *new = mx_create_node(data);
    t_list *last;

    if (*list == NULL)
        *list = new;
    else {
        last = *list;
        while(last->next != NULL)
            last = last->next;
        last->next = new;
    }
}
