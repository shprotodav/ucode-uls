#include "uls.h"

void mx_sort_name(t_obj **list) {
    int right;
    t_obj *obj = *list;

    for (right = 0; obj->next; right++)
        obj = obj->next;
    quicksort_name(list, 0, right);
}

static void quicksort_name(t_obj **list, int left, int right) {
    if (left < right) {
        int i = partition(list, left, right);
        quicksort_name(list, i + 1, right);
        quicksort_name(list, left, right - 1);
    }
}

static int partition(t_obj **list, int low, int high) {
    char *pivot = get_obj_by_index(list, high)->name; // -> name
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) { 
        if (mx_strcmp(get_obj_by_index(list, j)->name, pivot) < 0) { // сравнение
            i++;
            swap_obj(list, i, j);
        } 
    } 
    swap_obj(list, i + 1, high);
    return (i + 1);
} 

static void swap_obj(t_obj **list, int index1, int index2) {
    t_obj *obj1 = get_obj_by_index(list, index1);
    t_obj *obj2 = get_obj_by_index(list, index1);
    t_obj *tmp = obj1;

    obj1 = obj2;
    obj2 = tmp;
}

static t_obj *get_obj_by_index(t_obj **list, int index) {
    t_obj *obj = *list;

    for (int i = 0; i != index; i++)
        obj = obj->next;
    return obj;
}