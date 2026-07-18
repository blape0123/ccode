#include "libsbs.h"

char *sbs_strncat(char *dst, const char *src, size_t n) {
    size_t dl = 0;
    size_t i = 0;
    while(dst[dl]) {
        dl++;
    }
    while (i < n && src[i])
    {
        dst[dl + i] = src[i];
        i++;
    }
    dst[dl + i] = '\0';
    return dst;
}