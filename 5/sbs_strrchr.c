#include "libsbs.h"

char *sbs_strrchr(char *s, char c) {
    size_t i = 0;

    while(s[i]) {
        i++;
    }
    
    if (c == '\0') {
        return (char *)(s + i);
    }

    while(i > 0) {
        if (s[i] == c) {
            return (char *)(s + i);
        }
        i--;
    }

    return NULL;
}