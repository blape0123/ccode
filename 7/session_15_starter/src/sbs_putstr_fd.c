#include "libsbs.h"
#include <unistd.h>

void sbs_putchar_fd(char *s, int fd) {
    int i = 0;
    while(s[i]) {
        write(fd, &s[i], 1);
        i++;
    }
}