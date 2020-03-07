#include "uls.h"

/*
void mx_sort_obj(t_obj **list, char *flags) {
    int right;
    t_obj *obj = *list;

    for (right = 0; obj->next; right++)
        obj = obj->next;
    quicksort_obj(list, flags, 0, right);
    if (mx_is_flag_present(flags, 'r'))
        mx_reverse_obj_list(list, *list);
}

static void quicksort_obj(t_obj **list, char *flags, int left, int right) {
    if (left < right) {
        int i = partition(list, flags, left, right);
        quicksort_obj(list, flags, i + 1, right);
        quicksort_obj(list, flags, left, right - 1);
    }
}

static int partition(t_obj **list, char *flags, int low, int high) {
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
*/


//////////////////////////////////////////////


void mx_sort_obj(t_obj **list, char *flags) {
    int right = mx_obj_arr_len(list);
    
    quicksort_obj(list, flags, 0, right);
    if (mx_is_flag_present(flags, 'r'))
        reverse_obj_arr(list);
}

static void quicksort_obj(t_obj **list, char *flags, int left, int right) {
    if (left < right) {
        int i = partition(list, flags, left, right);
        quicksort_obj(list, flags, i + 1, right);
        quicksort_obj(list, flags, left, right - 1);
    }
}

static int partition(t_obj **list, char *flags, int low, int high) {
    char *pivot = list[high]->name; // -> name
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (mx_strcmp(list[j]->name, pivot) < 0) { // сравнение
            i++;
            swap_obj(&list[i], &list[j]);
        } 
    } 
    swap_obj(&list[i + 1], &list[high]);
    return (i + 1);
} 

static void swap_obj(t_obj **obj1, t_obj **obj2) {
    t_obj *tmp = *obj1;

    *obj1 = *obj2;
    *obj2 = tmp;
}

static void reverse_obj_arr(t_obj **list) {
    int len = mx_obj_arr_len(list);

    for (int i = 0; i < len / 2; i++)
        swap_obj(&list[i], &list[len - i - 1]);
}
