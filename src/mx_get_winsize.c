#include "uls.h"

int mx_get_winsize(void) {
    struct winsize win;

    ioctl(STDOUT_FILENO, TIOCGWINSZ, &win);
    return win.ws_col;
}
