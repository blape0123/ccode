#include "libsbs.h"

static size_t	str_len(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
    {
        i++;
    }
    
	return (i);
}

int	main(int argc, char *argv[])
{
	char	*commands[] = {"help", "exit", "list", "load", NULL};
	size_t	len = argc;
	int		i;

	i = 0;
	while (commands[i])
	{
		len = str_len(commands[i]);
        if (sbs_strncmp(argv[1], commands[i], len) == 0 && (argv[1][len] == ' ' || argv[1][len] == '\0')) {
            printf("명령어 인식: %s\n", commands[i]);
            return 0;
        }
		/* TODO 2: 시작한다면 input[len]이 ' ' 또는 '\0'인지 확인 (프리픽스 함정 방지) */
		/* TODO 3: 둘 다 참이면 "명령어 인식: ..." 출력 후 return 0 */
		i++;
	}
	printf("알 수 없는 명령어\n");
	return (0);
}