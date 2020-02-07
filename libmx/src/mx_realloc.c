#include "libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    size_t len;
    void  *str = NULL;

	if (!ptr)
		return malloc(size);
    len = malloc_size(ptr);
    if (len >= size) {
        return ptr;
    }
    else {
        str = malloc(size);
        str = mx_memcpy(str, ptr, size);
        free(ptr);
        return str;
    }
    return str;
}

