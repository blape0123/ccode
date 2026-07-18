#include "libsbs.h"

size_t sbs_strlcpy(char *dst, const char *src, size_t dstsize) {
    size_t srcl = sbs_strlen(src);
    if (dstsize == 0) {
        return srcl;
    }
    size_t i = 0;
    while (src[i] && i < dstsize - 1) {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return srcl;
}