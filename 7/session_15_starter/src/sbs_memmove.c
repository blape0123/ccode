#include "libsbs.h"

void *sbs_memmove(void *dst, const void *src, size_t n) {
    size_t i;
    unsigned char *p = dst;
    const unsigned char *c = src;
    if(p == c || n == 0) {
        return dst;
    }
    if(dst < src) {
        i = 0;
        while(i < n) {
            p[i] = c[i];
            i++;
        }
    }
    else {
        i = n;
        while(i > 0) {
            p[i - 1] = c[i - 1];
            i--;
        }
    }
    
    return dst;
}