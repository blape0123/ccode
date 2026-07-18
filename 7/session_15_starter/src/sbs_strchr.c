# include "libsbs.h"
# include <stddef.h>

char *sbs_strchr(const char *s, char c) {
    size_t i = 0;

    while(s[i]) {
        if (s[i] == c) {
            return (char *)(s + i);
        }
        i++;
    }

    if (c == '\0') {
        return (char *)(s + i);
    }

    return NULL;
}