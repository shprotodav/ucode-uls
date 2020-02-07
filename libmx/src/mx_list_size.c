#include "libmx.h"

int mx_list_size(t_list *list) {
    int count = 1;
    t_list *tmp;

    if (!list) return 0;
    tmp = list;
    while (tmp->next != NULL) {
        count++;
        tmp = tmp->next;
    }
    return count;
}
