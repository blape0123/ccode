#include "libsbs.h"

int to_lower(int c) {
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return (c);
}

int		sbs_strcasecmp(const char *s1, const char *s2) {
    size_t i = 0;
    while (s1[i] || s2[i]){
        if (to_lower((unsigned char)s1[i]) != to_lower((unsigned char)s2[i]))
            return (to_lower((unsigned char)s1[i]) - to_lower((unsigned char)s2[i]));
        i++;
    }
    return (0);
}