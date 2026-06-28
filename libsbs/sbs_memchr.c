#include "libsbs.h"

void	*sbs_memchr(const void *s, int c, size_t n) {
    size_t i = 0;
    const unsigned char *ss = s;
    while(i < n) {
        if(ss[i] == c) {
            void *p = (unsigned char *)&ss[i];
            return p;
        }
        i++;
    }
    return NULL;
}