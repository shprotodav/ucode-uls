
int mx_strncmp(const char *s1, const char *s2, int count) {
    int i = 0;

    for (; s1[i] == s2[i] && i < count; i++);
    return s1[i] - s2[i];
}
