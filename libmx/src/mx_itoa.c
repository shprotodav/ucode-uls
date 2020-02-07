#include "libmx.h"

char *mx_itoa(int number) {
    int sign = 1;
    int len = 1;
    char *asciinum = NULL;

    if (number < 0) {
        len++;
        sign = -1;
    }
    for (int i = number; i / 10 != 0; i /= 10)
        len++;
    asciinum = mx_strnew(len);
    for (int i = number; len != 0; i /= 10, len--) {
        if (number < 0 && len == 1)
            asciinum[0] = '-';
        else
            asciinum[len-1] = i % 10 * (sign) + '0';
    }
    return asciinum;
}

