#ifndef LIBSBS_H
# define LIBSBS_H

# include <stddef.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

/* 9차시 — 문자 분류/변환 */
int		sbs_isalpha(int c);
int		sbs_isdigit(int c);
int		sbs_isalnum(int c);
int		sbs_isascii(int c);
int		sbs_isprint(int c);
int		sbs_toupper(int c);
int		sbs_tolower(int c);

/* 10차시 — 메모리 함수 I */
void	*sbs_memset(void *b, int c, size_t len);
void	sbs_bzero(void *s, size_t n);
void	*sbs_memcpy(void *dst, const void *src, size_t n);
void	*sbs_memccpy(void *dst, const void *src, int c, size_t n);
void	*sbs_memchr(const void *s, int c, size_t n);
int		sbs_memcmp(const void *s1, const void *s2, size_t n);
void    *sbs_memmove(void *dst, const void *src, size_t n);

size_t sbs_strlen(const char *s);
size_t sbs_strlcpy(char *dst, const char *src, size_t dstsize);
size_t sbs_strnlen(const char *s, size_t maxlen);
char *sbs_strncpy(char *dst, const char *src, size_t n);
char *sbs_strncat(char *dst, const char *src, size_t n);
int sbs_strcmp(const char *s1, const char *s2);
int		sbs_strcasecmp(const char *s1, const char *s2);
int		sbs_strncasecmp(const char *s1, const char *s2, size_t n);
char *sbs_strchr(const char *s, char c);
char *sbs_strrchr(char *s, char c);
char *sbs_strnstr(const char *b, const char *s, size_t n);


#endif
