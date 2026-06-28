#include "libsbs.h"

void	*sbs_memcpy(void *dst, const void *src, size_t n) {
    size_t i = 0;
    unsigned char *p = dst;
    const unsigned char *c = src;
    while(i < n) {
        p[i] = c[i];
        i++;
    }
    return dst;
}