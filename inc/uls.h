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
#define MX_NOCOLOR      "\033[0m"           // nocolor
#define MX_RED          "\033[0;31m"        //  --x--x--x 3
#define MX_SOCKET       "\033[0;32m"        //  SOCKET
#define MX_PIPE         "\033[0;33m"        //  PIPE
#define MX_DIRCOLOR     "\033[0;34m"        //  DIR d3
#define MX_LINK         "\033[0;35m"        //  LINK
#define MX_BLOK         "\033[34;46m"       // BLOK
#define MX_CHARACTER    "\033[34;43m"       // CHARACTER
#define MX_UIDBIT       "\033[30;41m"       // --s------ 1
#define MX_GIDBIT       "\033[30;46m"       // -----s--- 2
#define MX_STICKYBIT    "\033[30;42m"       // -------wT(t)  d1
#define MX_NOTSTICKYBIT "\033[30;43m"       // -------w- d2
#define MX_HALF_YEAR 15768000
#define MX_MINOR(x) ((x) & 0xFFFFFF)
#define MX_MAJOR(x) (((x) >> 24) & 0xFF)

typedef struct s_obj {
    char *name; 
    struct stats *stats;
    struct s_obj *content;
    struct s_obj *next;
} t_obj;

