#ifndef LIBSBS_H
#define LIBSBS_H

int sbs_isalpha(int c);
int sbs_isdigit(int c);
int sbs_isalnum(int c);
int sbs_isascii(int c);
int sbs_isprint(int c);
int sbs_toupper(int c);
int sbs_tolower(int c);

void sbs_putchar_fd(char c, int fd);
void sbs_putstr_fd(char s, int fd);
void sbs_putnbr_fd(char d, int fd);

#endif