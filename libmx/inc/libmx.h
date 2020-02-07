#ifndef MYHEADERS_H
#define MYHEADERS_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>
#include <string.h>
#include <malloc/malloc.h>

typedef struct s_list {
    void *data;
    struct s_list *next;
} t_list;

int mx_atoi(const char *str);
int mx_binary_search(char **arr, int size, const char *s, int *count);
int mx_bubble_sort(char **arr, int size);
int mx_count_substr(const char *str, const char *sub);
int mx_count_words(const char *str, char c);
t_list  *mx_create_node(void *data);
char *mx_del_extra_spaces(const char *str);
void mx_del_strarr(char ***arr);
char *mx_file_to_str(const char *file);
void mx_foreach(int *arr, int size, void (*f)(int));
int mx_get_char_index(const char *str, char c);
int mx_get_substr_index(const char *str, const char *sub);
unsigned long mx_hex_to_nbr(const char *hex);
bool mx_isalpha(int c);
bool mx_isdigit(int c);
bool mx_islower(int c);
bool mx_isspace(char c);
bool mx_isupper(int c);
char *mx_itoa(int number);
int mx_list_size(t_list *list);
void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void *mx_memchr(const void *s, int c, size_t n);
int mx_memcmp(const void *s1, const void *s2, size_t n);
void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len);
void *mx_memmove(void *dst, const void *src, size_t len);
void *mx_memrchr(const void *s, int c, size_t n);
void *mx_memset(void *b, int c, size_t len);
char *mx_nbr_to_hex(unsigned long nbr);
void mx_pop_back(t_list **head);
void mx_pop_front(t_list **head);
double mx_pow(double n, unsigned int pow);
void mx_print_strarr(char **arr, const char *delim);
void mx_print_unicode(wchar_t c);
void mx_printchar(char c);
void mx_printerr(const char *s);
void mx_printint(int n);
void mx_printn();
void mx_printstr(const char *s);
void mx_push_back(t_list **list, void *data);
void mx_push_front(t_list **list, void *data);   
void *mx_realloc(void *ptr, size_t size);
char *mx_replace_substr(const char *str, const char *sub, const char *replace);
t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *));
int mx_sqrt(int x);
void mx_str_reverse(char *s);
char *mx_strcat(char *restrict s1, const char *restrict s2);
int mx_strcmp(const char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
void mx_strdel(char **str);
char *mx_strdup(const char *s1);
char *mx_strjoin(char const *s1, char const *s2);
int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int count);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strndup(const char *s1, size_t n);
char *mx_strnew(const int size);
char **mx_strsplit(const char *s, char c);
char *mx_strstr(const char *haystack, const char *needle);
char *mx_strtrim(const char *str);
char *mx_strtrim_char(const char *str, char c);
void mx_swap_char(char *s1, char *s2);
void mx_swap_str(char **s1, char **s2);
#endif

