# include "libsbs.h"
# include <stddef.h>

size_t sbs_strnlen(const char *s, size_t maxlen){
    size_t i = 0;
    while(s[i] && i < maxlen) {
        i++;
    }
    return i;
}