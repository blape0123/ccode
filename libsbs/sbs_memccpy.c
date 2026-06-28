#include "libsbs.h"

void	*sbs_memccpy(void *dst, const void *src, int c, size_t n) {
    size_t i = 0;
    unsigned char *pp = dst;
    const unsigned char *cc = src;
    while(i < n) {
        pp[i] = cc[i];
        if(cc[i] == c) {
            return &pp[i + 1];
        }
        i++;
    }
    return NULL;
}