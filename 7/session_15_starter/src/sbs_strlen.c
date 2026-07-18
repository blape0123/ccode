# include "libsbs.h"
# include <stddef.h>

size_t sbs_strlen(const char *s)
{
    size_t len = 0;
    while (s[len])      // s[len]이 '\0'(=0, 거짓)이면 멈춤
        len++;
    return (len);
}