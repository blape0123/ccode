# include "libsbs.h"
# include <stddef.h>

int		sbs_memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *a = s1;
    const unsigned char *b = s2;
    size_t i = 0;
    while (i < n)
    {
        if(a[i] == b[i]) {
            i++;
            continue;
        }
        return (int)a[i] - (int)b[i];
    }
    return 0;
}