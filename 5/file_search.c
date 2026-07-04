#include "libsbs.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 4096

static size_t	str_len(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	main(void)
{
	char	buf[BUF_SIZE];
	char	*word = "is";
	ssize_t	n;
	int		fd;

	/* TODO 1: sample.txt를 O_RDONLY로 열고, 실패하면 에러 출력 후 return 1 */
    /* TODO 2: read로 최대 BUF_SIZE - 1 바이트 읽고 close */
	/* TODO 3: buf[n] = '\0' 으로 문자열화 */
    fd = open("sample.txt", O_RDONLY);
    if (fd < 0) {
        return 1;
    }

    n = read(fd, buf, 4095);
    if (n < 0){
        return 1;
    }

    buf[n] = '\0';
    printf("%s\n", buf);

    close(fd);
	fd = -1;
	/* TODO 4: 도전 1(word_finder)과 같은 반복 검색 루프 */
    char	*text;
	size_t	text_len;
	size_t	word_len;
	size_t	pos;
	char	*found;
	int		count;

	word = "is";
	word_len = str_len(word);
	pos = 0;
	count = 0;
	while (pos < n)
	{
		found = sbs_strnstr(buf + pos, word, n - pos);
		if (!found)
			break ;
		printf("인덱스 %zu에서 발견\n", (size_t)(found - buf));
		count++;
		pos = (size_t)(found - buf) + word_len;
	}
	if (count == 0)
		printf("\"%s\"를 찾지 못함\n", word);
	else
		printf("\"%s\"를 %d번 찾음\n", word, count);
	return (0);
}