#include "libsbs.h"

char *sbs_strncpy(char *dst, const char *src, size_t n) {
    size_t sl = sbs_strlen(src);
    size_t i = 0;
    while (i < n && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    while(i < n) {
        dst[i] = '\0';
        i++;
    }
    return dst;
}