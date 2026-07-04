#include "libsbs.h"

char *sbs_strchr(const char *b, const char *s, size_t n) {
    size_t i = 0;
    size_t j;

    while(b[i] && i < n) {
        j = 0;
        while(s[j] && i + j < n) {
            if(b[i + j] != s[j]) {
                break;
            }
        }
        if(s[j] == '\0') {
            return (char *)(b + i);
        }
        i++;
    }

    return NULL;
}