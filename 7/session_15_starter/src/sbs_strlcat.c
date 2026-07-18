#include "libsbs.h"

size_t sbs_strlcat(char *dst, const char *src, size_t dstsize) {
    size_t dstl = 0;
    size_t srcl = sbs_strlen(src);
    size_t i = 0;
    if (dstsize == 0) {
        return srcl;
    }
    while (dstl < dstsize && dst[dstl]) {
        dstl++;
    }
    if (dstl == dstsize) {
        return (dstsize + srcl);
    }
    while(src[i] && dstl + i < dstsize - 1) {
        dst[dstl + i] = src[i];
        i++;
    }
    dst[dstl + i] = '\0';
    return dstl + srcl;
}