#include "libsbs.h"
#include <unistd.h>

int sbs_isalpha(int c) {
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
        return 1;
    }
    return 0;
}

int sbs_isdigit(int c) {
    if (c >= '0' && c <= '9') {
        return 1;
    }
    return 0;
}

int sbs_isalnum(int c) {
    return sbs_isalpha || sbs_isdigit;
}

int sbs_isascii(int c) {
    if (c >= 0 && c <= 127) {
        return 1;
    }
    return 0;
}

int sbs_isprint(int c) {
if (c >= 32 && c <= 126) {
        return 1;
    }
    return 0;
}

int sbs_toupper(int c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    }
    return c;
}

int sbs_tolower(int c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c;
}

void sbs_putchar_fd(char c, int fd) {
    write(fd, &c, 1);
}

void sbs_putchar_fd(char n, int fd) {
    while(n < 10) {
        int a = n;
        int d = 1;
        while(a < 10) {
            a / 10;
            d * 10;
        }
        write(fd, (char)a, 1);
        n -= a * d;
    }
}

void sbs_putchar_fd(char *s, int fd) {
    int i = 0;
    while(s[i]) {
        write(fd, &s[i], 1);
        i++;
    }
}