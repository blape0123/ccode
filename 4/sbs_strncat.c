#include "libsbs.h"

char *sbs_strncat(char *dst, const char *src, size_t n) {
    size_t dl = sbs_strlen(dst);
    size_t i = 0;
    while (i < n && src[i])
    {
        dst[dl + i] = src[i];
        i++;
    }
    dst[dl + i] = '\0';
    return dst;
}