#include "libsbs.h"
#include <unistd.h>

void sbs_putchar_fd(char nd, int fd) {
    long n = nd;
    if(n < 0) {
        write(fd, "-", 1);
        n = -n;
    }
    if(n == 0) {
        char c = '0';
        write(fd, &c, 1);
    }
    char buf[12];

    int i = 0;
    while(n > 0) {
        buf[i] = (char)(n % 10) + '0';
        i++;
        n /= 10;
    }
    while (i > 0)
    {
        i--;
        write(fd, &buf[i], 1);
    }
    
}