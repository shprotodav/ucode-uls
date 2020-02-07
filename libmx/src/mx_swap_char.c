#include "libmx.h"

void mx_swap_char(char *s1, char *s2) {
    char s;
    
    if (!*s1 || !*s2) return;
    s = *s1;
    *s1 = *s2;
    *s2 = s;
}
