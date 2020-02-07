#include "libmx.h"

static int file_size(const char *file);

char *mx_file_to_str(const char *file) {
	int len = file_size(file);
	int fd = open(file, 'r');
	char *str = mx_strnew(len);

	if (fd < 0 || len < 0)
		return NULL;
	if (str)
		read(fd, str, len * sizeof(char));
	close(fd);
	return str;
}

static int file_size(const char *file) {
	int fd = open(file, 'r');
	int len = 0;
	
	if (fd < 0)
		return fd;
	for (char buf; read(fd, &buf, sizeof(char)) == sizeof(char); len++);
	close(fd);
	return len;
}
