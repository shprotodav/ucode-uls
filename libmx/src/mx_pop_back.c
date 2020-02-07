#include "libmx.h"

void mx_pop_back(t_list **head) {
    t_list *pointer;

    if (head == NULL || *head == NULL)
        return;
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }
    pointer = *head;
    while (pointer->next->next != NULL)
        pointer = pointer->next;
    free(pointer->next);
    pointer->next = NULL;
}
