#include "libmx.h"

void mx_printint(int n) {
    int tens = 1;
    int sign = 1;

    if (n < 0) {
        mx_printchar('-');
        sign = -1;
    } 
    for (int i = n; i / 10 != 0; i /= 10)
        tens *= 10;
    for (int i = n; tens != 0; i %= tens, tens /= 10)
        mx_printchar(i / tens * (sign) + '0');
}
