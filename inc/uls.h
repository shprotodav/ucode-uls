#pragma once

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h> //ctime, time
#include <fcntl.h>
#include <string.h>
#include <malloc/malloc.h>
#include "libmx/inc/libmx.h"

#include <dirent.h> //opendir, readdir, closedir
#include <sys/stat.h> //stat, lstat
#include <sys/types.h>
#include <sys/acl.h> //acl_get_file, acl_to_text, acl_free
#include <pwd.h> //getpwuid
#include <grp.h> //getgrgid
#include <sys/ioctl.h> //ioctl
#include <sys/xattr.h> //listxattr, getxattr

#define MY_FLAGS "AFRldotu1"


typedef struct s_obj {
    char *name; 
    struct stats *stats; 
    struct s_obj *next;
} t_obj;

